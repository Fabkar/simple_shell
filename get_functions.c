#include "shell.h"
/**
 * _getline - function to get the line from the prompt
 * @buffline: buffer to allocate the characters
 * @size: size of the buffer to allocate the characters
 * @std: FILE std
 * Return: the amount of characters got
 */
ssize_t _getline(char **buffline, size_t *size, FILE *std)
{
	size_t alloc = 100;
	int counter = 0;
	char c;

	if (!buffline || !size || !std)
		return (-1);
	if (*buffline == NULL)
	{
		*buffline = malloc(sizeof(char *) * alloc);
		if (*buffline == NULL)
			return (-1);
	}
	while (EOF != (c = getchar()))
	{
		counter++;
		(*buffline)[counter - 1] = c;
		if (c == 10)
			break;
	}
	if (c == EOF)
		return (-1);
	(*buffline)[counter] = '\0';
	return (counter);
}
/**
 * _getenv - function to get the PATH env
 * @path: enviroment
 * Return:  the PATH in a string.
 */
char *_getenv(char *path)
{
	char *folder = NULL;
	int i = 0;

	while (environ[i])
	{
		if (!_strcmp(environ[i], path))
		{
			folder = (*(environ + i));
			folder = folder + _strlen(path) + 1;
		}
		i++;
	}
	return (folder);
}
