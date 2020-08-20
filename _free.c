#include "shell.h"
/**
 * _free - function to free args
 * @arg: single pointer
 * @args: double pointer
 * Return: void return
 */
void _free(char *arg, char **args)
{
	free(arg);
	free(args);
}
