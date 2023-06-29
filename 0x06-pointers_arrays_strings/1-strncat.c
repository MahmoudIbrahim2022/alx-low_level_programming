#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest : The Destination String
 * @src :  The Source String
 * @n : number of bytes from source
 *
 * Return: the pointer to dest
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
