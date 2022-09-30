#include <stdio.h>
#include <stdlib.h>

/**
*main - mulplies the elements in array of the arg
*@argc: The formal parameter
*@argv: This is another formal parameter.
*Return: returns 0
**/
int main(int argc, char *argv[])
{
	int index;
	int multiplication;

	multiplication = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
