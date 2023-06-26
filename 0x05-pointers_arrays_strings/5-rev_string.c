#include "main.h"

/**
 * rev_string - reverses a string.
 * @s : The String to reverse
 *
 * Return : void
 *
*/

void rev_string(char *s)
{

	int i = 0;
	int j;


	while (s[i] != '\0')
	i++;

	char tmp[i];

	for (j = 0; j < i; j++)
	tmp[j] = s[j];

	for (j = 0; j < i; j++)
	s[j] = tmp[i - j - 1];

}
