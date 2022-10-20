#include <unistd.h>
/**
 * _putchar - shows a single character
 * @c: the character to be shown
 *
 * Return: returns 1 on success otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
