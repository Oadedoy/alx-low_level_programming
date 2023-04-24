#include <stdio.h>
#include "main.h"
/**
 * _is upper - function that checks for uppercase letters
 * @c: input
 *
 * Return: returns 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
