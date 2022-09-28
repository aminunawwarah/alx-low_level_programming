#include "main.h"

/**
*helperFunction -  returns 0 or 1
*@num: number being checked
*@i: possible factor of the number
*Return: 0 if n is not a prime number else 1
*/
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, 1 + i));
		}
	}
	else
	{
		return (1);
	}
}
/**
*is_prime_number -  checks if number is prime
*@n: number to be checked
*Return: 1 if number is prime number else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
