#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: parameter for deatination address
 * @src: parameter for source address
 * @n: number of bytes to be copied
 *
 * Return: return value in destination address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src [a];
	}
	return (dest);
}
