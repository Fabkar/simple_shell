#include "shell.h"
/**
 * loop - loop
 * Return: 0 to EXIT_SUCCESS.
 */
int loop(void)
{
	char *line = NULL;
	char **args = NULL;
	int status = 1, outstatus = 0, counter = 1;

	while (status)
	{
		if (isatty(STDIN_FILENO))
			prompt();
		line = readline(outstatus);
		if (line == NULL)
			continue;
		line = checkspaces(line);
		if (line == NULL)
			continue;
		simplexit(line, outstatus); /* libres de leaks hasta aca */
		args = splitline(line);
		if (checkenv(args[0]))
			continue;
		checkexit(args[0], args[1], args, outstatus);
		outstatus = execute(args, counter);
		counter++;
	}
	return (outstatus);
}
