#include "3-calc.h"

/**
*op_add - retrieves the sum of two numbers
*@a: a number
*@b: another number
*Return: returns the total
**/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - retrieves the difference of two numbers
*@a: a number
*@b: another number
*Return: returns the difference
**/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - retrieves the product of two numbers
*@a: a number
*@b: another number
*Return: returns the product
**/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_add - retrieves the quotient of two numbers
*@a: a number
*@b: another number
*Return: returns the quotient
**/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - retrieves the remainder of two numbers
*@a: a number
*@b: another number
*Return: returns the remainder
**/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
