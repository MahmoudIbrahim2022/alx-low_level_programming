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
	char *s;

	s = (char *) malloc(size);

	if (size == 0 || s == 0)
	return (0);
	else
	{
		for (i = 0; i < size; i++)
		s[i] = c;
		return (s);
	}
}
