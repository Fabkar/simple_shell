#include "shell.h"
/**
 * loop - loop
 * Return: 0 to EXIT_SUCCESS.
 */
int loop(void)
{
	char *line = NULL;
	char **args = NULL;
	int status = 1, outstatus = 0;

	while (status)
	{
		if (isatty(STDIN_FILENO))
			prompt();
		line = readline();
		if (line == NULL)
			continue;
		if ((_strncmp("env", line, 3)) == 0)
		{
			free(line);
			_printenv();
			continue;
		}
		args = splitline(line);
		checkexit(args[0], args[1], args);
		outstatus = execute(args);
	}
	return (outstatus);
}
