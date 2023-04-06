#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Point to the first node of the linked list
 * Return: The nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *next;
	size_t total = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	/* Traversing the linked list */
	prev = head;
	while (prev)
	{
		printf("[%p] %d\n", (void *)prev, prev->n);
		total++;
	/* If next pointer points to previous, break the loop */
		if (prev > prev->next)
		{
			prev = prev->next;
		}
		else
		{
			next = prev->next;
			printf("print address and number-> [%p] %d\n", (void *)next, next->n);
			break;
		}
	}
	return (total);
}

