#include "shell.h"
/**
 * execute - function that execute all arguments in command line.
 * @args: Arguments typed into the line command.
 * Return: No return.
 */
void execute(char **args)
{
	pid_t pid;
	int status;
	char *command = NULL;

	pid = fork();
	if (pid < 0)
	{
		perror("Error: ");
		free(args[0]);
		free(args);
		exit(1);
	}
	else if (pid == 0)
	{
		command = matchcommand(args[0]);
		if (command == NULL)
		{
			status = 127;
			perror("command not found");
			free(args[0]);
			free(args);
			exit(127);
		}
		if (execve(command, args, environ) == -1)
		{
			perror("");
			free(args[0]);
			free(args);
			exit(126);
		}
		else
			exit(EXIT_SUCCESS);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}
}
