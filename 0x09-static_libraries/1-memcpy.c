#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @dest : destination memory area.
 * @src : source constant byte.
 * @n : No of bytes of the memory area to copy.
 *
 * Return: pointer to the destination memory area
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);


}
