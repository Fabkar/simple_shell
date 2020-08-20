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
		_free(NULL, NULL);
		exit(1);
	}
	else if (pid == 0)
	{
		command = matchcommand(args[0]);
		if (command == NULL)
		{
			perror("./hsh");
			_free(NULL, NULL);
			exit(127);
		}
		if (execve(command, args, environ) == -1)
		{
			perror("asdfadsf");
			_free(NULL, NULL);
			exit(126);
		}
		else
		{
			free(command);
			_free(NULL, NULL);
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
