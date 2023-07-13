#include <stdlib.h>
#include "main.h"


/**
 * _calloc - allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *s;

	if (nmemb == 0 || size == 0)
	return (0);

	s = malloc(nmemb * size);

	if (s == NULL)
	return (0);

	return (s);

}
