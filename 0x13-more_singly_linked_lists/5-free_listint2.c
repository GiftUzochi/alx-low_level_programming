#include "lists.h"

/**
 * free_listint - function to empty listint_t
 * @head: the first element in the list cary the next ptr
 * Return: no return value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}

