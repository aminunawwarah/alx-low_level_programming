#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_percentage(void);
int print_bin(va_list b);

/**
  * struct code_format - a struct for code format
  * @sc: parameter for specifier
  * @f: the associated funtion
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
