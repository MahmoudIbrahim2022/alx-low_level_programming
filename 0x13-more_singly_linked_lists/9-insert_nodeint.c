#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head node
 * @idx: New Node Index
 * @n: New Node Data
 *
 * Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node, *previous_node;
	unsigned int i;

	if (!*head || !new_node)
	return (NULL);

	new_node->n = n;

	node = *head;

	while (node && i < idx)
	{
		if ((i + 1) == idx)
		previous_node = node;
		i++;
		node = node->next;
	}


	if (node && previous_node)
	{
		new_node->next = node;
		previous_node->next = new_node;
		return (new_node);
	}
	else
	return (NULL);

}
