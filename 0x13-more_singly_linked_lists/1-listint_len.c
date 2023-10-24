#include "lists.h"

/*
 * listint_len - print number of elements in listint_t list
 * @h: the first pointer
 * Return: the num-nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t listint = 0;

	while (h != NULL)
	{
			h = h->next;
			num-nodes++;
	}
	return (num-nodes);
}

