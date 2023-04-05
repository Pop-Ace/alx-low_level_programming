#include "lists.h"

/**
 * free_listint - Entry point
 * Description: Frees a listint_t list.
 * @head: Pointer to the head node in the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}


