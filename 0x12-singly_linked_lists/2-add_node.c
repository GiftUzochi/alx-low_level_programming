#include "lists.h"

/**
 * add_node - fxn to add a newnode at the beginning
 * @head: the head of the linkedlist
 * @str: the string to add_node to the element
 * Return: the address of ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;

	return (new_head);
}
