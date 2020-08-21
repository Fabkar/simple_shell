#include "shell.h"
/**
 * execute - function that execute all arguments in command line.
 * @args: Arguments typed into the line command.
 * @counter: counter of commands.
 * @name: Name of the program.
 * Return: No return.
 */
int execute(char **args, int counter, char *name)
{
	pid_t pid;
	int status, errorstatus = 0;
	char *command = NULL;

	command = matchcommand(args[0]);
	if (command == NULL)
	{
		errorsys(args[0], counter, "not found", name);
		free(args[0]);
		free(args);
		return (1);
	}    /* no memory leaks with no commands */
	pid = fork();
	if (pid < 0)
	{
		perror("Error: ");
		exit(errno);
	}
	else if (pid == 0)
	{
		if (execve(command, args, environ) == -1)
		{
			errorsys(command, counter, "cannot execute", name);
			free(command);
			free(args[0]);
			free(args);
			exit(errno);
		}
		else
			exit(errno);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			errorstatus = WEXITSTATUS(status);
	}
	free(command);
	free(args[0]);
	free(args);
	return (errorstatus);
}
