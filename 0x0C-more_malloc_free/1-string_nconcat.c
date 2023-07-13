#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: first string.
 * @n: No of bytes of second string.
 *
 * Return: pointer to the allocated memory.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	s = malloc(i + n + 1);

	if (s == NULL)
	return (0);

	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

		for (j = 0; j < n; j++)
		s[i + j] = s2[j];

		s[i + j] = '\0';

		return (s);
	}


}
