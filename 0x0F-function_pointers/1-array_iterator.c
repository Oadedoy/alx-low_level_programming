#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
 *
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = int size_t i;
	for (i < size; i++)
	{
		action(array[i]);
	}
}
