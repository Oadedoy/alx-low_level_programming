#include <stdio.h>
#include "main.h"
/**
 * multiple - function that guess multiple that create square root
 * @x: number to find its square root
 * @y: number which are multiples
 *
 * Return: returns the result for x through y
 */
int multiple(int x, int y)
{
	if (x == (y * y))
	{
		return (y);
	}
	else if (x <= (y * y))
	{
		return (-1);
	}
	else
	{
		return (multiple(x, y + 1));
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a
 * number
 * @n: interger argument
 *
 * Return: returns (0)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (multiple(n, 0));
	}
}
