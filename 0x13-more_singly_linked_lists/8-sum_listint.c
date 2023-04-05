#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the first node of the linked list
 *
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int total;

	for (total = 0; head; head = head->next)
		total += head->n;

	return (total);
}

