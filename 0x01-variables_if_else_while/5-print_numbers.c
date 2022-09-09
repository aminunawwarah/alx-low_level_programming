#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print numbers
*
*Description: The program prints
*some numbers.
*Return: 0
*/
int main(void)
{
	int loop;

	for (loop = 0; loop < 10; loop++)
	{
		printf("%i", loop);
	}
	printf("\n");
	return (0);
}
