#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this function allocates memory for an array
 * @nmemb: this is the number of elements to be allocated
 * @size: this is the size of the elements
 *
 * Return: returns a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	s = malloc(b);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
		s[a] = 0;
	return (s);
}
