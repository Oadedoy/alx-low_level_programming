#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the characters '_putchar' folled by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char a[] = "_putchar";

	for (n = 0; n < 8; ++n)
		_putchar(a[n]);
	_putchar('\n');

	return (0);
}
