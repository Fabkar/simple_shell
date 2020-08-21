#include "shell.h"
/**
 * loop - loop.
 * @name: name of the program.
 * Return: 0 to EXIT_SUCCESS.
 */
int loop(char *name)
{
	char *line = NULL;
	char **args = NULL;
	int status = 1, outstatus = 0, counter = 1;

	while (status)
	{
		if (isatty(STDIN_FILENO))
		prompt();
		/* read the line from the command line */
		line = readline(outstatus);
		/* if a new line is pased to the command line */
		if (line == NULL)
		continue;
		/* check if there is any spaces at the beginning */
		line = checkspaces(line);
		if (line == NULL)
		continue;
		/* check just the word exit with the last status */
		simplexit(line, outstatus);
		/* split the command line in separated arguments */
		args = splitline(line);
		/* check if the command is env to printenv */
		if (checkenv(args[0], args))
		continue;
		/* check the exit with arguments to exit with status*/
		checkexit(args[0], args[1], args, outstatus);
		/* execute the command passed */
		outstatus = execute(args, counter, name);
		counter++;
	}
	return (outstatus);
}
