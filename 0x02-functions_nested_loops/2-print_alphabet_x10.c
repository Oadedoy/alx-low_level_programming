#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int line, alp;

	for (line = 0; line <= 9; ++line)
	{
		for (alp = 'a'; alp <= 'z'; ++alp)
			_putchar(alp);
		_putchar('\n');
	}
}
