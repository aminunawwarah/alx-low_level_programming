#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*str_concat - concatenes two string
*@s1: is a pointer to a string
*@s2: is a pointer to another string
*Return: NULL if something went wrong
**/
char *str_concat(char *s1, char *s2)
{
	unsigned int length1, length2, size, index1, index2;
	char *nstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (s2[length2] != '\0')
	{
		length2++;
	}
	size = length1 + length2;
	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
	{
		return (NULL);
	}
	index1 = 0;
	while (index1 < length1)
	{
		nstr[index1] = s1[index1];
		index1++;
	}
	index2 = 0;
	while (index1 <= size)
	{
		nstr[i] = s2[index2];
		index1++;
		index2++;
	}
	return (nstr);
}
