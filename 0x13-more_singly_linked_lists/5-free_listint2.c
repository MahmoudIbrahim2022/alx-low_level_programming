#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head node
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{

	listint_t *node, *next_node;

	if (!head)
	return;

	node = *head;

	*head = NULL;

	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}

}
