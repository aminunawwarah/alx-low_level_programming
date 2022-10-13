#include "3-calc.h"

/**
*get_op_func - selects the proper operation
*@s: operand
*Return: error is returned if somthing goes wrong
**/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index;

	while (index < 5)
	{
		if (s[0] == ops[index].op[0])
		{
			return (ops[index].f);
		}
		index++;
	}
	return (NULL);
}
