#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the structure to take the head from
 * @n: add_noteint
 * @num: the integer number n
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int num = n;

	if (n == NULL);
	return (NULL);

	new->n = num;
	new->next = *head;

	*head = new;

	return (new);
}

