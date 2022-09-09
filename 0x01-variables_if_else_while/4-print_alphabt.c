#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Alphabet printing
*
*Description: The program prints
*some of the English alphabets,
*Return: 0
*/
int main(0)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha != 'e' && cha != 'q')
		{
			putchar(cha);
		}
	}
	putchar('\n');
	return (0);
}
