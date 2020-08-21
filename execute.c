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
	pid_t pid = fork();
	int status, errorstatus = 0;
	char *command = NULL;

	if (pid < 0)
	{
		perror("Error: ");
		exit(1);
	}
	else if (pid == 0)
	{
		command = matchcommand(args[0]);
		if (command == NULL)
		{
			errorsys(args[0], counter, "not found", name);
			exit(127);
		}
		if (execve(command, args, environ) == -1)
		{
			errorsys(command, counter, "cannot execute", name);
			exit(126);
		}
		else
		{
			exit(EXIT_SUCCESS);
		}
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			errorstatus = WEXITSTATUS(status);
	}
	return (errorstatus);
}
