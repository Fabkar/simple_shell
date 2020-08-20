#include "shell.h"
/**
 * execute - function that execute all arguments in command line.
 * @args: Arguments typed into the line command.
 * Return: No return.
 */
int execute(char **args)
{
	pid_t pid = fork();
	int status, errorstatus = 0;
	char *command = NULL;

	if (pid < 0)
	{
		perror("Error: ");
		_free(args[0], args);
		exit(1);
	}
	else if (pid == 0)
	{
		command = matchcommand(args[0]);
		if (command == NULL)
		{
			status = 127;
			perror("command not found");
			_free(args[0], args);
			exit(127);
		}
		if (execve(command, args, environ) == -1)
		{
			perror("");
			_free(args[0], args);
			exit(126);
		}
		else
		{
			free(command);
			_free(args[0], args);
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
