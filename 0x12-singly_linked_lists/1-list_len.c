#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elelments in a linked
 * list list_t
 * @h: the head of linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
