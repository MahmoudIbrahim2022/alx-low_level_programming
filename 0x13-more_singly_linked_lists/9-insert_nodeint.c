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
	unsigned int i = 0;

	if (!*head || !new_node)
	return (NULL);

	if (n)
	new_node->n = n;
	else
	return (NULL);

	node = *head;

	while (node)
	{
		if (i == idx)
		{
			previous_node->next = new_node;
			new_node->next = node;
			return (new_node);
		}

		previous_node = node;
		node = node->next;
		i++;
	}

	return (NULL);

}
