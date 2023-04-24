#include <stdio.h>
#include "main.h"
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
		int i = 0, f = n;
		while (i <= f)
		{
			int a = (i + f) / 2;
			
			if  (a == (n / a))
			{
				return (a);
			}
			else if (a < (n / a))
			{
				i = a + 1;
			}
			else
			{
				f = a - 1;
			}
		}
		return (i - 1);
	}
}
