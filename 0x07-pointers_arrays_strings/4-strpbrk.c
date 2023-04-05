#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * @s: string analysed
 * @accept: comparison string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (NULL);
}
