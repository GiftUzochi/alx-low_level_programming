#include "lists.h"

/**
 * sum_dlistint - fxn to calculate the sum of elements in list
 * @head: prt to the next list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
