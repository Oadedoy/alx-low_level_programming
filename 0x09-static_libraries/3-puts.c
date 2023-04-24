#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @a: string parameter to be printed
 *
 * Return: nothing
 */
void _puts(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
