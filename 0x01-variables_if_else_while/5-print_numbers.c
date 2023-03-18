#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints from 0 to 9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
