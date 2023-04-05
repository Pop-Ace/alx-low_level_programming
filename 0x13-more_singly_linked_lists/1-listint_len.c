#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked listint_t list
 * @h: pointer to the head of the list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}

