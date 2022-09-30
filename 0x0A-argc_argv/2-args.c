#include <stdio.h>
#include <stdlib.h>
/**
*main - shows all the arguments a program recieves
*@argc: The formal parameter
*@argv: This is another formal parameter.
*Return: returns 0
**/
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
