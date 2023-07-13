#include <stdlib.h>
#include "main.h"


/**
 * _memset - fill memory with constant.
 * @s: pointer to put the constant.
 * @b: The constant.
 * @n: max bytes to use
 *
 * Return: s.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	*s++ = b;

	return (ptr);

}


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

	_memset(s, 0, sizeof(int) * nmemb);

	return (s);

}
