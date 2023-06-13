#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of size size and initializes
 *                it with a specific char c.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
