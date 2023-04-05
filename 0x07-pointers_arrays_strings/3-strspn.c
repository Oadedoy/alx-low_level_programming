#include "main.h"
/**
 * _strspn - function that calculates the length of substring prefix
 * @s: the string to be scanned
 * @accept: comparison string
 *
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b] == '\0')
			return (a);
	}
	return (a);
}

