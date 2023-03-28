#include "main.h"
/**
 * puts_half - prints half of the string
 * @s: parameter holding the string
 *
 * Return: nothing
 */
void puts_half(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
		a++;

	b = a / 2;
	if (a % 2 == 1)
		a++;

	while (b < a)
	{
		_putchar(s[b]);
		b++;
	}
	_putchar('\n');
}
