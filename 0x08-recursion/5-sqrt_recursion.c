#include "main.h"
/**
*helperFunction - checks if sqrt of number exists
*@num: number
*@pSqrt: possible sqrt of number
*Return: sqrt of number
*/
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else{
		if ((pSqrt * pSqrt) > num)
		{
			return (-1);
		}
		else
		{
			return (helperFunction(num, pSqrt + 1));
		}
	}
}
/**
*_sqrt_recursion -  returns the natural square root of a number
*@n: number to find sqrt of
*Return: square root of n -1 if n isn't a perfect square
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helperFunction(n, 0));
	}
}
	