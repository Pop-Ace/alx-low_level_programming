#include "lists.h"

/**
 * reverse_listint - To Reverse a listint_t linked list.
 * @head: Pointer to pointer of first node in the linked list
 * Return: A pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *front;

	if (!head || !*head)
		return (NULL);

	back = NULL;
	while (*head)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}
	*head = back;

	return (*head);
}

