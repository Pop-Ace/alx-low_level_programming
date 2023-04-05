#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: Pointer to pointer of first node in linked list
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *to_date, *temp;
	unsigned int n;

	if (head == NULL || *head == NULL)
		return (-1);

	/* if index == 0, delete the head */
	if (index == 0)
	{
		to_date = *head;
		*head = (*head)->next;
		free(to_date);
		return (1);
	}

	to_date = *head;
	for (n = 0; n < index - 1; n++)
	{
		if (to_date == NULL)
			return (-1);
		to_date = to_date->next;
	}

	temp = to_date->next;
	to_date->next = temp->next;
	free(temp);

	return (1);
}
