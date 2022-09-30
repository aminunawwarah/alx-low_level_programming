#include <stdio.h>

/**
*main - Shows the number of arguments passed to it
*@args: The formal parameter
*@argv: This is another formal parameter.
*Return: returns 0
**/
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
