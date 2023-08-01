#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to the head node
 * @index: Node Index
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *previous_node;
	unsigned int i = 0;

	if (!*head)
	return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;

	while (node)
	{
		if (i == index)
		{
			previous_node->next = node->next;
			free(node);
			return (1);
		}

		previous_node = node;
		node = node->next;
		i++;
	}

	return (-1);

}
