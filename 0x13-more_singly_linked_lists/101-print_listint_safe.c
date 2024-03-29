#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Point to the first node of the linked list
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *next;
	size_t total = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	/* Traversing the linke list */
	prev = head;
	while (prev)
	{
		printf("[%p] %d\n", (void *)prev, prev->n);
		total++;
		/* Break loop if next pointer points to previous node */
		if (prev > prev->next)
		{
			prev = prev->next;
		}
		else
		{
			next = prev->next;
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
	}
	return (total);
}
