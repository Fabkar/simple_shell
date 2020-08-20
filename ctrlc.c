#include "shell.h"
/**
 * ctrlc - function to exit when user type ctrl + c.
 * @sign: integer
 * Return: Nothing.
 */
void ctrlc(int sign)
{
	signal(sign, SIG_IGN);
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "#cisfun$ ", 10);
	signal(SIGINT, ctrlc);
}
