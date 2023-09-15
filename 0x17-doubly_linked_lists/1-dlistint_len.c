#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the list provided
 * @h: head of the  given list
 * Return: the total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		++i;
		h = h->next;
	}

	return (i);
}
