#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest : The Destination String
 * @src :  The Source String
 * @n : number of bytes from source to copy
 *
 * Return: the pointer to dest
 *
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
