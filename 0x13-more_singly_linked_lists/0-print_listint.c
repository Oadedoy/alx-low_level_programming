#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints the elements of a listint_t list
 * @h: the first node of listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
