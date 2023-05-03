#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that add a new node at the end of the list
 * @head: first node on the list
 * @str: string to be copied into the node
 *
 * Return: the address of the new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp;
	size_t n;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	n_node->len = n;
	n_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = n_node;
	}
	return (*head);
}
