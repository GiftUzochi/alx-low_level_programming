#include "lists.h"

/**
 * sum_listint - to returns the sum of all the elements in linked list
 * @head: first node with ptr
 * Return: NULL for free list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum_all_data = 0;

	while (temp)
	{
		sum_all_data += temp->n;
		temp = temp->next;
	}
	return (sum_all_data);

}
