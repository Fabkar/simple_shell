#include "shell.h"
/**
 * checkexit - function to check a string
 * @arg: Pointer to string.
 * @n: pointer to the number in case exist.
 * @args: args to be free
 * @status: status to exit
 * Return: 1 if the match is success else 0.
 */
int checkexit(char *arg, char *n, char **args, int status)
{
	if (!arg && !n)
		return (0);
	if (arg || n)
	{
		if (!_strncmp("exit", arg, 4))
		{
			if (n)
				status = _atoi(n);
			free(arg);
			free(args);
			exit(status);
		}
	}
	return (0);
}
/**
 * checkspaces - function to check a string of spaces
 * @line: Pointer to string.
 * Return: 0 if there are only spaces
 */
int checkspaces(char *line)
{
	int i = 0;
	(void)line;

	while (line[i] != '\0')
	{
		if (line[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}
/**
 * checkexit - function to check a string
 * @arg: Pointer to string.
 * @status: status to exit
 * Return: 1 if the match is success else 0.
 */
int simplexit(char *arg, int status)
{
	if (!arg)
		return (0);
	if (arg)
	{
		if (!_strncmp("exit", arg, 4))
		{
			free(arg);
			exit(status);
		}
	}
	return (0);
}