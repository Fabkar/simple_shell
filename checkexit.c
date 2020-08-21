#include "shell.h"
/**
 * checkexit - function to check the exit with status.
 * @arg: Pointer to string.
 * @n: pointer to the number in case exist.
 * @args: args to be free
 * @status: status to exit
 * Return: 0 if the match is not success else exit with status.
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
 * Return: null or a string without spaces.
 */
char *checkspaces(char *line)
{
	int i = 0;
	(void)line;
	while (line[i] != '\0')
	{
		if (line[i] != ' ')
			return (line + i);
		i++;
	}
	free(line);
	return (NULL);
}
/**
 * simplexit - function to check a string
 * @arg: Pointer to string.
 * @status: status to exit
 * Return: 0 if the match is NOT success else exit.
 */
int simplexit(char *arg, int status)
{
	int len;

	if (!arg)
		return (0);
	len = _strlen(arg);
	if (len == 4)
		if (arg)
			if (!_strncmp("exit", arg, 4))
			{
				free(arg);
				exit(status);
			}
	return (0);
}
/**
 * checkenv - function check env built
 * @arg: Pointer to string.
 * Return: 1 if the match is success else 0.
 */
int checkenv(char *arg)
{
	int len;

	len = _strlen(arg);
	if (len == 3)
		if ((_strncmp("env", arg, 3)) == 0)
		{
			_printenv();
			return (1);
		}
	return (0);
}
/**
 * errorsys - puts in command line the error
 * @argv: pointer to pointer
 * @count: the history
 * @error: exit error.
 * @name: name of the program.
 * Return: Nothing.
 */
void errorsys(char *argv, int count, char *error, char *name)
{
	_puts(name);
	_puts(": ");
	print_number(count);
	_puts(": ");
	_puts(argv);
	_puts(": ");
	_puts(error);
	_putchar(10);
}
