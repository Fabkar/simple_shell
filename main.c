#include "shell.h"
/**
 * main - function to start a shell in linux.
 * @ac: argument counter.
 * @av: variable arguments.
 * Return:  0 Success
 */
int main(int ac, char **av)
{
	int outstatus = 0;
	(void)ac;

	signal(SIGINT, ctrlc);
	outstatus = loop(av[0]);
	return (outstatus);
}
