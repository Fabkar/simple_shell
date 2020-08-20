#include "shell.h"
/**
 * splitline - function separate the string in new strings
 * @buffer: string
 * Return:  a pointer to strings.
 */
char **splitline(char *buffer)
{
	unsigned int pos = 0;
	char **words = malloc(sizeof(char *) * BUFFERSIZE);
	char *word = NULL, *bufferline = NULL;

	if (words == NULL)
		exit(EXIT_FAILURE);
	bufferline = _strdup(buffer);
	free(buffer);
	word = _strtok(bufferline, " ");
	while (word)
	{
		words[pos] = word;
		pos++;
		word = _strtok(NULL, " ");
	}
	words[pos] = NULL;
	free(word)
	free(bufferline);
	return (words);
}
/**
 * splitpath - function separate the path in new strings
 * @path: string
 * Return:  a pointer to strings.
 */
char **splitpath(char *path)
{
	int pos = 0;
	char **folders = malloc(sizeof(char *) * BUFFERSIZE);
	char *folder = NULL, *buffer = NULL;

	if (folders == NULL)
		exit(EXIT_FAILURE);
	buffer = _strdup(path);
	folder = _strtok(buffer, ":");
	folders[pos] = folder;
	while (folder)
	{
		folders[pos] = folder;
		pos++;
		folder = _strtok(NULL, ":");
	}
	folders[pos] = NULL;
	free(buffer);
	return (folders);
}
