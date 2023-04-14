#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to a newly allocaterd space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int p = 0, q = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		a = malloc(sizeof(char) * (len1 + n + 1));
	else
		a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!a)
		return (NULL);
	while (p < len1)
	{
		a[p] = s1[p];
		p++;
	}
	while (n < len2 && p < (len1 + n))
		a[p++] = s2[q++];
	while (n >= len2 && p < (len1 + len2))
		a[p++] = s2[q++];
	a[p] = '\0';

	return (a);
}
