#include "lists.h"

/**
 * add_node_end - fxn to add a newnode at the end
 * @head: the head of the linkedlist
 * @str: the string to add_node at the end
 * Return: the address of ptr
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = malloc(sizeof(list_t));

	if (new_tail == NULL)
	return (NULL);
	new_tail->str = strdup(str);
	if (new_tail->str == NULL)
	{
		free(new_tail);
		return (NULL);
	}
	new_tail->len = strlen(str);
	new_tail->next = *head;

	return (new_tail);
}
