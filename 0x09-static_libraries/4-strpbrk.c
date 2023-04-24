#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - this function locates the first occurence
 * in the string s of any of the bytes in string accept
 * @s: string  to be checked
 * @accept: string containing characters to match
 *
 * Return: a pointer to the character in s that matches one
 * of the characters in accept, else return NULL
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
