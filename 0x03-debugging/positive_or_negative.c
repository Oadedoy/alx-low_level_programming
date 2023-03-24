#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @i: parameter that holds interger to be tested
 *
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
