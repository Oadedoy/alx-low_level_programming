#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: parameter to be filled
 * @n: number of bytes to be filled
 *
 * Return: type of the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
