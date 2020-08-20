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
		args = splitline(line);
		checkexit(args[0], args[1], args);
		outstatus = execute(args);
		free(args[0]);
		free(args);
	}
	return (outstatus);
}
