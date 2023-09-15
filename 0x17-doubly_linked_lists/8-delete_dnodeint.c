#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * 								given list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *curr;

	curr = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(curr);
		return (1);
	}

	while (curr != NULL && x < index)
	{
		curr = curr->next;
		++x;
	}
	if (curr == NULL)
	{
		return (-1);
	}
	curr->prev->next = curr->next;

	if (curr->next != NULL)
	{
		curr->next->prev = curr->prev;
	}
	free(curr);
	return (1);
}
