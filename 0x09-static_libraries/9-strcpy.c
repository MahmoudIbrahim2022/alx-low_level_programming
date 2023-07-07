#include "main.h"


/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest : The Destination String
 * @src :  The Source String
 *
 * Return: the pointer to dest
 *
*/




char *_strcpy(char *dest, char *src)
{

	int n = 0;
	int i;

	while (src[n] != '\0')
	n++;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
