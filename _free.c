#include "shell.h"
/**
 * _free - function to free args.
 * @command: command to be free
 * @arg: arg[0] to be free
 * @args: double pointer to be free
 * Return: void return
 */
void _free(char *command, char *arg, char **args)
{
	free(command);
	free(arg);
	free(args);
}
