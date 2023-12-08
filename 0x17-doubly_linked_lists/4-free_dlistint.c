#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - fxn to free a list
 * @head: ptr to the next data
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
