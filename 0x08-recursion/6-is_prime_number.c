#include <stdio.h>
#include "main.h"
/**
 * divisor - function that checks if number is prime
 * @x: number for analysis
 * @y: number dividing through
 *
 * Return: return 1 if true and 0 if false
 */
int divisor(int x, int y)
{
	if ((x % y) == 0)
	{
		if (x == y)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (divisor(x, y + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: interger input
 *
 * Return: returns (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (divisor(n, 2));
	}
}
