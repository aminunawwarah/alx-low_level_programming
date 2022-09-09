#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Print alphabets
*
*Description: The program prints
*alphabets.
*Return: 0
*/
int main(void)
{
	char cha;
	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
