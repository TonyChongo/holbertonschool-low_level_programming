#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: A linked list
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((new = head) != NULL)
		{
			temp = temp->next;
			free(new);
		}
		*head = NULL;
	}
}
