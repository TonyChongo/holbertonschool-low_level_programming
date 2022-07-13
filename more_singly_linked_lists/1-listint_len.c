#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: Singly linked list
 * Return: the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t nelements;

	nelements = 0;
	while (h != NULL)
	{
		h = h->next;
		nelements++;
	}
	return (nelements);
}
