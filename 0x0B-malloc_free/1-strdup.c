#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: original string
 *
 * Return: returns a pointer to a new string.
 *
 */

char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *s;

	if (str == NULL)
	return (0);
	else
	while (str[size] != '\0')
	size++;
	size++;

	s = (char *) malloc(size * sizeof(char));

	if (s == 0)
	return (0);
	else
	{
		for (i = 0; i < size; i++)
		s[i] = str[i];
		return (s);
	}


}
