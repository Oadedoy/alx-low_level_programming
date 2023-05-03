#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees all the memory used by list
 * @head: the first node of list
 *
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
