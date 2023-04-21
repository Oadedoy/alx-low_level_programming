#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n:constant parameter
 *
 * Return: Always (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int total = 0, i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	while (i < n)
	{
		total += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (total);
}
