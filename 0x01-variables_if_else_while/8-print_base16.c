#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print number in base 16
*
*Description: This program prints
*in hexadecimal format.
*Return: 0
*/
int main(void)
{
	char cha;
	
	for (cha = '0'; cha <= '9'; cha++)
	{
		putchar(cha);
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
