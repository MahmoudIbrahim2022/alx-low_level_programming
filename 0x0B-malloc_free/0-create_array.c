#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: specific character
 *
 * Return: array of chars.
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = (char *) malloc(size * sizeof(char));

	if (*ptr == 0)
	return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		ptr[i] = c;
		return (ptr);
	}
}
