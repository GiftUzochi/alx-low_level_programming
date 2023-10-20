#include "lists.h"

/**
 * print_list - fxn to print element of list_t
 * @h: the length of string
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
