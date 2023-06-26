#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s : The String to find its length
 *
 * Return: the length of a string
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);

}
