#include "shell.h"
/**
 * ctrlc - function to exit when user type ctrl + c.
 * @sign: integer
 * Return: Nothing.
 */
void ctrlc(int sign)
{
	signal(sign, SIG_IGN);
	_putchar(10);
	prompt();
	signal(SIGINT, ctrlc);
}
