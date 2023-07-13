#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Integer for which memory will be allocated.
 *
 * Return: pointer to the allocated memory.
 *
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(sizeof(b));

	if (s == NULL)
	exit(98);

	else
	return (s);

}
