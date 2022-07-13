#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: Linked list to free
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *freed;

	while ((freed = head) != NULL)
	{
		head = head->next;
		free(freed->str);
		free(freed);
	}
}
