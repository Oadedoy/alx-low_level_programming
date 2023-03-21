#include"main.h"

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
		putchar(a[n]);
	putchar('\n');

	return (0);
}
