#include "lists.h"

/**
 * free_listint - function to empty listint_t
 * @head: the first element in the list cary the next ptr
 * Return: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *value;
	listint_t *digit = head;

	while (digit != NULL)
	{
		value = digit;
		digit = digit->next;
		free(value);
	}
}
