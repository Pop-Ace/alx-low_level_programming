#include "lists.h"

/**
 * find_listint_loop - findng the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head, *nextt = head;

	/* loop through the linked list until nextt becomes NULL */
	while (nextt != NULL)
	{
	/* move prev one node at a time */
		prev = prev->next;
	/* move nextt two nodes at a time */
		nextt = nextt->next->next;
	/* if there is a loop, the prev and nextt will eventually meet */
		if (prev == nextt)
		{
			prev = head;
	/* loop through the linked list with prev& nextt moving one node at a time */
			while (prev != nextt)
			{
				prev = prev->next;
				nextt = nextt->next;
			}
	/* return the node where the loop starts */
			return (prev);
		}
	}
	/* if there is no loop, return NULL */
	return (NULL);
}
