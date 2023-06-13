#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/
int **alloc_grid(int width, int height)
{
	int **s, i, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
			return (NULL);
		}
		for (l = 0; l < width; l++)
			s[i][l] = 0;
	}
	return (s);
}
