#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - fxn to inserts a new node at a given position
 * @h: head of doubly-linked list
 * @idx: index for insertion of new node
 * @n: data for new node
 * Return: address of new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL);
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL))
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count < idx) && (curr == NULL))
		return (NULL);
	if (localPrev != NULL)
	{
		localPrev->next = create_dnode(n, localPrev, curr);
		curr->prev = localPrev->next;
		return (localPrev->next);
	}
	return (NULL);
}
}
