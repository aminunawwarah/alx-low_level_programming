#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints letters in reverse
*
*Description: The program prints
*alphabets in reverse order.
*Return: 0
*/
int main(void)
{
	char cha;

	for(cha = 'z'; cha >= 'z'; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
