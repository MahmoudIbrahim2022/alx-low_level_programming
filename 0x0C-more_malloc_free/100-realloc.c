#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: memory to be reallocated.
 * @old_size: old size.
 * @new_size: new size.
 *
 * Return: pointer to the reallocated memory.
 *
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (new_size == 0 && ptr != NULL)
	return (NULL);

	ptr = malloc(old_size);

	if (ptr == NULL)
	ptr = malloc(new_size);

	if (new_size == old_size)
	return (ptr);

	free(ptr);

	s = malloc(new_size);

	if (s == NULL)
	return (NULL);

	return (s);

}
