#include "shell.h"
/**
 * _strcat - function concatenates two strings
 * @dest: string of destination
 * @src: string of source
 * Return:  dest - strings concatenated
 */
char *_strcat(char *dest, char *src)
{
	char *command = NULL;
	int len1, len2, a, b;

	len1 = _strlen(dest);
	len2 = _strlen(src);
	command = malloc(sizeof(char) * (len1 + len2 + 2));
	if (!command)
		return (NULL);
	for (a = 0; dest[a]; a++)
		command[a] = dest[a];
	command[a] = 47;
	b = a + 1;
	for (a = 0; src[a]; a++)
		command[b + a] = src[a];
	command[a + b] = '\0';
	return (command);
}
/**
 * _strtok - function separate the string in tokens
 * @arg: string
 * @dlm: delimiter
 * Return: a pointer to the next token
 */
char *_strtok(char *arg, char *dlm)
{
	static char *token;
	int c = 0, found = 0, i = 0;
	char *str = NULL;

	if (!dlm || (arg == NULL && token == NULL))
		return (0);
	if (arg != NULL)
		str = _strdup(arg);
	if (arg == NULL)
		str = token;
	while (str[i] == dlm[0])
		i++;
	for (c = i; str[c] != '\0'; c++)
		if (str[c] == dlm[0])
		{
			found = 1;
			break;
		}
	for ( ; str[c] != '\0'; c++)
		if (str[c] != dlm[0])
			break;
		else if (str[c + 1] == '\0')
		{
			str[c] = '\0';
			found = 0;
			break;
		}
		else
			str[c] = '\0';
	if (!found)
	{
		token = NULL;
		return (str + i);
	}
	if (*(str + c) != '\0')
		token = str + c;
	else
		token = '\0';
	return (str + i);
}
/**
 * _strncmp - function to compare two strings with a certain amount of bytes
 * @s1: string compared
 * @s2: string compared
 * @len: amount of bytes to be compare
 * Return: 0 if they are the same and -1 if not
 */

int _strncmp(char *s1, char *s2, int len)
{
	int a = 0;

	while (a < len)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/**
 * _strcmp - function to compare two strings
 * @s1: string compared
 * @s2: string compared
 * Return:  0 if they are the same and -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/**
 * _strlen - function to know the length of the string
 * @s: string
 * Return:  length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
