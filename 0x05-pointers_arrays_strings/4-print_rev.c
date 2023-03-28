#include "main.h"

/**
 * print_rev - reverse the string printed
 * @s: parameter for string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (a = a - 1; s[a] != '\0'; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
