#include "main.h"

/**
*rev_string -> is the main function
*@s: is the formal parameter of the function
*Return: returns nothing
*/
void rev_string(char *s)
{
	char tmp;
	int i;
	int length1;
	int length2;
	length1 = 0;
	lengtht2 = 0;

	while (s[length1] != '\0')
	{
		length1++;
	}
	for (i = 0; i < lengtht1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] tmp;
		length2 -= 1;
	}
}
