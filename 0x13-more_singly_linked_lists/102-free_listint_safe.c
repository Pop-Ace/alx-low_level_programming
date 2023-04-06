#include "lists.h"

/**
 * iterate_listint_len - calculates the length of a iteration in a linked list
 * @head: pointer to the head of the linked list
 * Return: number of nodes in the loop, or 0 if there is no loop
 */
size_t iterate_listint_len(const listint_t *head)
{
	const listint_t *prev, *next;
	size_t length = 1;

	/* No loop, if list is 0or1 node */
	if (head == NULL || head->next == NULL)
		return (0);

	/* prev pointer */
	prev = head->next;
	/* next pointer */
	next = head->next->next;

	while (next != NULL)
	{
		if (prev == next)
		{
			prev = head;
			while (prev != next)
			{
				length++;
				prev = prev->next;
				next = next->next;
			}

			prev = prev->next;
			while (prev != next)
			{
				length++;
				prev = prev->next;
			}

			return (length);
		}

		prev = prev->next;
		next = next->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to the head of the list
 * Return: size of the list that was released
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t length, k;

	length = iterate_listint_len(*h);

	if (length == 0)
	{
		for (k = 0; *h != NULL; k++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
	}
	else
	{
		for (k = 0; k < length; k++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		*h = NULL;
	}

	h = NULL;

	return (k);
}
