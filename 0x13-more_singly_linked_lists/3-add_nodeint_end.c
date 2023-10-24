#include "lists.h"

/**
 * add_nodeint_end - add node at end of the list
 * @head: the new head given (for the end node)
 * @n: the integer to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_new = malloc(sizeof(listint_t));

	int num = n;

	if (end_new == NULL)
		return (NULL);

	end_new->n = num;
	end_new->next = NULL;

	if (*head == NULL)
	{
		*head = end_new;
		return (*head);
	}
}
