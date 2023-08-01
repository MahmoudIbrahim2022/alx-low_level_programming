#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node
 * @index: Node Index
 *
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	while (node)
	{
		node = node->next;
		i++;
		if (i == index)
		return (node);
	}


	return (NULL);

}
