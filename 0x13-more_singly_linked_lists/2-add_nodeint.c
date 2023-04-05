#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the listint_t list
 * @head: pointer to the head of the list
 * @n: New node to add
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
