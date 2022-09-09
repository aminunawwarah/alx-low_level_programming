#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print many numbers
*
*Description: This program prints
*some numbers out there.
*Return: 0
*/
int main(void)
{
	int characterValue;
	
	for (characterValue = 48; characterValue <= 57 characterValue++)
	{
		putchar(characterValue);
		if(characterValue != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
