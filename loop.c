#include "shell.h"
/**
 * loop - loop
 * Return: 0 to EXIT_SUCCESS.
 */
int loop(void)
{
	char *line = NULL;
	char **args = NULL;
	int status = 1, outstatus = 0, counter = 0;

	while (status)
	{
		if (isatty(STDIN_FILENO))
			prompt();
		line = readline();
		if (line == NULL)
			continue;
		if (!checkspaces(line))
			continue;
		if ((_strncmp("env", line, 3)) == 0)
		{
			free(line);
			_printenv();
			continue;
		}
		simplexit(line, outstatus);
		args = splitline(line);
		outstatus = execute(args);
		checkexit(args[0], args[1], args, outstatus);
		counter++;
	}
	return (outstatus);
}
