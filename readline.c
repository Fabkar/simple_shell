#include "shell.h"
/**
 * readline - Function that read our line command.
 * Return: The string of characters.
 */
char *readline(void)
{
	char *line = NULL;
	char *buffer = NULL;
	size_t size = 0;
	int i = 0, n = 0;

	n = _getline(&line, &size, stdin);
	if (n == EOF)
	{
		_putchar(10);
		free(line);
		exit(EXIT_SUCCESS);
	}
	if (n == 1)
	{
		free(line);
		return (NULL);
	}
	buffer = malloc(_strlen(line));
	for ( ; i < (_strlen(line) - 1); i++)
		buffer[i] = line[i];
	buffer[i] = '\0';
	free(line);
	return (buffer);
}
