#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list.
 * @head: A linked list.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *freed;

	while ((freed = head) != NULL)
	{
		head = head->next;
		free(freed);
	}
}
