#include "shell.h"
/**
 * _free - function to free args.
 * @args: double pointer
 * Return: void return
 */
void _free(char **args)
{
	int a;

	for (a = 0; args[a] != NULL; a++)
		free(args[a]);
	free(args);
}
