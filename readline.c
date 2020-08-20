#include "shell.h"
/**
 * readline - Function that read our line command.
 * @status: In case EOF exit with status
 * Return: The string of characters.
 */
char *readline(int status)
{
	char *line = NULL;
	char *buffer = NULL;
	size_t size = 0;
	int i = 0, n = 0;

	n = _getline(&line, &size, stdin);
	if (n == EOF)
	{
		free(line);
		exit(status);
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
