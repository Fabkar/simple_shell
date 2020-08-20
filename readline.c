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

	n = getline(&line, &size, stdin);
	if (n == EOF)
	{
		if (feof(stdin))
		{
			_putchar(10);
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(line);
			exit(EXIT_FAILURE);
		}
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
