#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the old head node
 * @n: New node Number.
 *
 * Return: the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!new_node || !head)
	return (NULL);

	if (n)
	new_node->n = n;

	if (node)
	{
		while (node->next)
		node = node->next;

		node->next = new_node;
	}
	else
	*head = new_node;

	return (new_node);

}
