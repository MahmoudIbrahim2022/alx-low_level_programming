#include "main.h"


/**
 * _strcat - concatenates two strings.
 * @dest : The Destination String
 * @src :  The Source String
 *
 * Return: the pointer to dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}