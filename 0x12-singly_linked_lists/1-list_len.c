#include "lists.h"

/**
 * list_len - fxn that returns num of element in a linked list
 * @h: the ptr to the head of the linkedlist
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
	len++;
	h = h->next;
}
return (num_nodes);
}

