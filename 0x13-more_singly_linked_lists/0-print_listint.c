#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of the list
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
	/* To Print current node */
		printf("%d\n", h->n);
	/* A move to next node */
		h = h->next;
		total++;
	}
	return (total);
}

