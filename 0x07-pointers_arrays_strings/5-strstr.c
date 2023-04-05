#include "main.h"
#include <stddef.h>
/**
 * _strstr -  function finds the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: main string
 * @needle: subtring to be searched in the main string
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (haystack + a);
	}
	return (NULL);
}
