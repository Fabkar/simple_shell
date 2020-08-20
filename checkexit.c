#include "shell.h"
/**
 * checkexit - function to check a string
 * @arg: Pointer to string.
 * @n: pointer to the number in case exist.
 * @args: args to be free
 * Return: 1 if the match is success else 0.
 */
int checkexit(char *arg, char *n, char **args)
{
	int status;

	if (!arg && !n)
		return (0);
	if (arg || n)
	{
		if (!_strncmp("exit", arg, 4))
		{
			status = 0;
			if (n)
				status = _atoi(n);
			free(arg);
			free(args);
			exit(status);
		}
	}
	return (0);
}
