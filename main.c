#include "shell.h"
/**
 * main - function to start a shell in linux
 * Return:  0 Success
 */
int main(void)
{
	signal(SIGINT, ctrlc);
	loop();
	exit(EXIT_SUCCESS);
}
