#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the old head node
 * @n: New head Number.
 *
 * Return: the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!head || !new_head)
	return (NULL);

	if (n)
	{
		new_head->n = n;
		new_head->next = *head;
	}

	*head = new_head;

	return (new_head);

}
