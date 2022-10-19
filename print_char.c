#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_char - shows character
 *@c: the character to be printed
 *Return: 1 on success otherwise -1
 */
int print_char(va_list c)
{
unsigned char m_char;
m_char = va_arg(c, int);
_putchar(m_char);
return (1);
}
/**
 *print_percentage - shows the percentage sign
 *Return: 1 on success otherwise -1;
 */
int print_percentage(void)
{
_putchar('%');
return (1);
}
