#include "shell.h"
/**
 * main - function to start a shell in linux
 * Return:  0 Success
 */
int main(void)
{
	int outstatus = 0;

	signal(SIGINT, ctrlc);
	outstatus = loop();
	return (outstatus);
}
