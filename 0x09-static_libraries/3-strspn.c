#include "main.h"
/**
 * _strspn - function that calculates length of substring prefix
 * @s: the string to be scanned
 * @accept: string containing list of characters to match with string s
 *
 * Return: returns number of bytes in prefix of substring s which
 * consists of only the bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p, q;

	for (p = 0; s[p]; p++)
	{
		for (q = 0; accept[q]; q++)
		{
			if (s[p] == accept[q])
				break;
		}
		if (accept[q] == '\0')
			return (p);
	}
	return (p);
}
