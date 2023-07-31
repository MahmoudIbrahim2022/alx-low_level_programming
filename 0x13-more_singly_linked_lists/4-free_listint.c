#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head node
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	if (!head)
	return;

	while (head)
	{
		free(head);
		head = head->next;
	}

}
