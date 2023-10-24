#include "lists.h"

/*
 * print_listint - print the element of int
 * @h: the first pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
