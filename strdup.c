#include "shell.h"
/**
 * _strdup - function to copy an array with new memory address
 * @str: array to be copy
 * Return: the new array
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int a = 0, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	p = malloc(len + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for ( ; a < len; a++)
		p[a] = str[a];
	p[a] = str[a];
	return (p);
}
