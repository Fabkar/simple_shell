#include "shell.h"
/**
 * _puts - function to print a string
 * @str: variable
 * Return: no return
 */
void _puts(char *str)
{
	int a = 0;

	for ( ; *(str + a) != '\0' ; a++)
		_putchar(*(str + a));
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * prompt - Prints our prompt line.
 * Return: Nothing.
 */
void prompt(void)
{
	_puts("#cisfun$ ");
}
