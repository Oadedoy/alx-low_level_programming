#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: array pointer address
 *         NULL if it fails
*/

int *array_range(int min, int max)
{
	int i, *array_p;

	if (min > max)
		return (NULL);

	array_p = malloc((max - min + 1) * sizeof(int));
	if (array_p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array_p[i] = min;
		min++;
	}
	return (array_p);
}
