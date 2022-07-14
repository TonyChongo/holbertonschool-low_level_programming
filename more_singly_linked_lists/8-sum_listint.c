#include "lists.h"

/**
 * sum_listint - function that returns the sum of a linked list
 * @head: head of a link list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
