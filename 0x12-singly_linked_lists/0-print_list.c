#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s : The String to find its length
 *
 * Return: the length of a string
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);

}

/**
 * print_list - prints all the elements of a list_t list.
 * @h:  pointer to the first Node.
 *
 * Return: the number of nodes.
 *
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);

}
