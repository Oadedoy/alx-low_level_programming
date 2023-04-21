#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - this function prints numbers followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the funtion
 *
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		unsigned int var = va_arg(args, int);
		printf("%d", var);

		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
