#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (!head || !*head)
	return (0);

	node = (*head)->next;
	n = (*head)->n;

	free(*head);
	*head = node;

	return (n);

}
