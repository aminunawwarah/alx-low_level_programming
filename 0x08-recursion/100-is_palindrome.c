#include "main.h"
/**
*_length - checks the string length
*@s: is the formal parameter i.e the string
*Return: returns the string length
**/
int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _length(s + 1));
}
/**
*checkpoint - checks if the string is palindrome
*@index: array index
*@length: the length of the string
*@str: the actual string;
**/
int checkpoint(int index, int length, char *str)
{
	if (length > 0)
	{
		if (str[index] == s[length])
		{
			return (checkpoint(index + 1, length - 1, str));
		}
		else if (s[index] != s[length])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
*is_palindrome - checks for palindromic string
*@s: is the actual string
*Return: 1 is the string is palindromic else 0
**/
int is_palindrome(char *s)
{
	return (checkpoint(0, _length(s) - 1, s));
}

	