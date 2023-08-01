#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head node
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);

}
