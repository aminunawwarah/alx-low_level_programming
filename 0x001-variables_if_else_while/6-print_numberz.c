#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print with char variable
*
*Description: This program prints
*numbers 0-9 with char variable.
*Return: 0
*/
int main(void)
{
	char loopValue;
	for (loopValue = '0'; loopValue <= '9'; loopValue++)
	{
		putchar(loopValue);
	}
	putchar('\n');
	return 0;
}
