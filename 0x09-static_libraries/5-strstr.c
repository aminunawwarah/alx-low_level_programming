#include "main.h"

/**
* *_strstr - is the function of program
* @*haystack: is a formal parameter
* @*needle: is another formal parameter
* Return: end of line
*/
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do
			{
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}
				index++;
			}
			while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
