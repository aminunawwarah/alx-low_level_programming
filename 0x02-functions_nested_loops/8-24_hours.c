#include "main.h"

/**
*jack_bauer - prints with putchar
*Description: This program prints
*some characters with putchar
*function
*Return: returns 0
*/
void jak_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_remainder = minutes % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
