#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter representing the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		temp = s[c];
		s[c] = s[b];
		s[b] = temp;
		c++;
		b--;
	}
}
