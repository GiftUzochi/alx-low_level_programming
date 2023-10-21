#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: list_t to be freed
 * Return: 0
 */

void free_list(list_t *head);
{
	list_t *digit;
	list_t *value = head;

	while (value != NULL)
	{
		temp = value;
		value = value->next;
		free(temp->str);
		free(temp);
	}
