#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of list_t
 * @head: head node
 * @str: string to store in list
 *
 * Return: the address of the new element on success or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t n;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	n_node->len = n;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}
