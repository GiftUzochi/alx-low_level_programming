#include "lists.h"

/**
 * pop_listint - delete the head node of the list
 * @head: first head which contains the pointer
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int head_num;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	head_num = current->n;

	*head = (*head)->next;
	free(current);

	return (head_num);
}
