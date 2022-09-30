#include <stdio.h>

/**
*main - writes the files name followed by a new line
*The program will still print it's new name even if
*it has been modified without compiling it.
*@argc: The formal parameter
*@argv: This is another formal parameter.
*Return: returns 0
**/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
