#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: return (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
