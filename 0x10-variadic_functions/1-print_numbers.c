#include <stdarg.h>
#include <stdlib.h
#include <stdio.h>
/**
*print_numbers - display numbers followed by a new line
*@separator: character to be added between numbers
*@n: number of integers passed to the function
*Return: returns nothing
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list numbers;

	va_start(numbers, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (index < n -1 && separator != NULL)
		{
			printf("%s", separator);
		}
		va_end(numbers);
	}
}
