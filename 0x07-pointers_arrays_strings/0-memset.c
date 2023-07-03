#include "main.h"


/**
 * _memset -  fills memory with a constant byte.
 * @s : memory area.
 * @b : constant byte.
 * @n : No of bytes of the memory area to fill.
 *
 * Return: pointer to the memory area s.
 *
*/


char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
