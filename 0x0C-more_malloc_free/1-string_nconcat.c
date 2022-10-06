#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - joins two strings together
*@s1: is the first string to join
*@s2: is the second string to join
*@n: size of the second string
*Return: returns a pointer
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index1, index2, k;
	char *s;

	if (s1 == NULL)
		index1 = 0;
	else
	{
		for (index1 = 0; s1[index1]; index1++)
			;
	}
	if (s2 == NULL)
			index2 = 0;
		else
		{
			for (index2 = 0; s2[index2]; index2++)
				;
		}
		if (index2 > n)
			index2 = n;
		s = malloc(sizeof(char) * (index1 + index2 + 1));
		if (s == NULL)
			return (NULL);
		for (k = 0; k < index1; k++)
			s[k] = s1[k];
		for (k = 0; k < index2; k++)
			s[k + index1] = s2[k];
		s[index1 + index2] = '\0';
		return (s);
}
