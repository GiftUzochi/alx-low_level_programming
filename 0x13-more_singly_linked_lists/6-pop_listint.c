#include "lists.h"

/**
 * pop_listint - delete the head node of the list
 * @head: first head which contains the pointer
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num_node;

	if (head || !*head)
		return (0);

	num_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num_node);
}
