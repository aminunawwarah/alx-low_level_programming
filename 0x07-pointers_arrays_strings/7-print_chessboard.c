#include "main.h"

/**
*print_chessboard - is the function of program
*@*a: is a formal parameter
*Return: a void function
*/
void print_chessboard(char (*a)[8])
{
	int index1;
	int index2;

	for (index1 = 0; index <= 7; index1++)
	{
		for (index2 = 0; index2 < 7; index2++)
		{
			_putchar(a[index1][index2]);
		}
		_putchar(10);
	}
}
	