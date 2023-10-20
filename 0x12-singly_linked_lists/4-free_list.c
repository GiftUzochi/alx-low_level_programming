#include "main.h"

/**
 * free_list - function that frees a list_t list
 * @str: print the string
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