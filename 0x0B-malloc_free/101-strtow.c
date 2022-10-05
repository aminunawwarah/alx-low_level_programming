#include <stdlib.h>
#include "main.h"

/**
*wordnos - counts the number of words in a string
*@s: is the formal parameter of the function
*Return: the number of words are returned
**/
int wordnos(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
*strtow - the function splits strings
*@str: is the formal parameter of the function
*Return: char is the return type of the function
**/
char **strtow(char *str)
{
	char **matrix, *temp;
	int index, k = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
	{
		length++;
	}
	words = wordnos(str);
	if (words == 0)
	{
		return (NULL);
	}
	matrix = (char **) malloc(sizeof(char *)) * (words + 1);
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= length; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (c)
			{
				end = index;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*temp++ = str[start++];
				}
				*temp = '\0';
				matrix[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = index;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
