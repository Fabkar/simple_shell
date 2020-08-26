#include "shell.h"
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
		if (!_strcmp(environ[i], path) && environ[i][4] == '=')
		{
			folder = (*(environ + i));
			folder = folder + _strlen(path) + 1;
		}
		i++;
	}
	return (folder);
}
