#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns a pointer to a new string.
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int size1 = 0;
	int size2 = 0;
	int size = 0;
	char *s;

	while (s1[size1] != '\0')
	size1++;

	while (s2[size2] != '\0')
	size2++;

	size = size1 + size2 + 1;

	s = (char *) malloc(size * sizeof(char));

	if (s == 0)
	return (0);
	else
	{
		for (i = 0; i < size1; i++)
		s[i] = s1[i];
		for (i = 0; i < size2; i++)
		s[i + size1] = s2[i];
		return (s);
	}


}
