#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specified index in the list
 * @head: pointer to the first node in the list
 * @idx: index where the new node should be inserted
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node;
    listint_t *temp = *head;

    new_node = malloc(sizeof(listint_t));
    if (!new_node || !head)
	   	return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
