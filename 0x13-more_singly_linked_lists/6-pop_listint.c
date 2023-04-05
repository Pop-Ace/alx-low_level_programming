#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to pointer of first node in linked list
 * Return: 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
