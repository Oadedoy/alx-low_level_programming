#include "main.h"
/**
 * print_chessboard - this function prints a chessboard
 * @a: array to print the chessboard
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int w, b;

	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[w][b]);
		}
			_putchar('\n');
	}
}
