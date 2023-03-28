#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @ch: string parameter to be printed
 *
 * Return: nothing
 */
void _puts(char *ch)
{
	int a;

	for (a = 0; ch[a] != '\0'; a++)
	{
		_putchar(ch[a]);
	}
	_putchar('\n');
}
