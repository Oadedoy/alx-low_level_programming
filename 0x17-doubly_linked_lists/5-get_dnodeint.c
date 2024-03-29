#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a given list
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;

	while (curr != NULL && index > 0)
	{
		curr = curr->next;
		--index;
	}

	if (curr != NULL && index == 0)
	{
		return (curr);
	}
	return (NULL);
}
