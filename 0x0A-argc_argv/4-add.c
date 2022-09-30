#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*main - prints the sum of positive numbers
*@argc: The formal parameter
*@argv: This is another formal parameter.
*Return: returns 0
**/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
