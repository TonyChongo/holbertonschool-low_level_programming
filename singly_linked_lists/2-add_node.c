#include "lists.h"
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning
 * @head: head of linked list
 * @str: string to sotre the list
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t charact;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (charact = 0; str[charact]; charact++)
		;

	new->len = charact;
	new->next = *head;
	*head = new;

	return (*head);
}
