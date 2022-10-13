#include <stdarg.h>
#include <stdlib.h
#include <stdio.h>
/**
*print_all - displays everything
*@format: the arguments passed to the function
*Return: returns nothing
**/
void print_all(const char * const format, ...)
{
	unsigned int index;
	va_list args;
	char *s, *separator;

	va_start(args, format);
	separator = "";
	index = 0;
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", separator, s);
				break;
			default:
				index++;
				continue;
		}
		separator = ", ";
		index++;
	}
	printf("\n");
	va_end(args);
}
