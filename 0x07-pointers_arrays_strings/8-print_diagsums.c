#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * square matrix of integers
 * @a: parameter to check the string
 * @size: size of the string
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int b, c, d, sum1, sum2;

	sum1 = sum2 = 0;
	b = 0;
	c = size - 1;
	for (d = 0; d < size; d++)
	{
		sum1 += *(a + d * size + b);
		sum2 += *(a + d * size + c);
		b += 1;
		c -= 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
