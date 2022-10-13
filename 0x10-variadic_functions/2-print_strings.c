#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
*print_strings - display text followed by a new line
*@separator: character to be added between words
*@n: number of strings passed to the function
*Return: returns nothing
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *s;
	va_list strings;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
