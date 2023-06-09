#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: second string for comparison
 *
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
