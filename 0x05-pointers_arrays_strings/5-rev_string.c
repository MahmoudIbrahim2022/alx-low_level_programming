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
	int temp;


	while (s[i] != '\0')
	i++;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}

}
