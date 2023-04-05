#include "lists.h"

/**
 * add_nodeint_end - adding new node at the end of a listint_t list
 * @head: points to the head of the list
 * @n: integer to add to the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next)
		end = end->next;
	end->next = new;
	return (new);
}
