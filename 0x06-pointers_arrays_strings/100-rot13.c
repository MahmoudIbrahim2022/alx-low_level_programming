#include "main.h"

/**
 * rot13 -  encodes a string into ROT13.
 * @str : string to be encoded into ROT13.
 *
 * Return: encoded string
 *
*/


char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		str[i] += 13;
		else if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
		str[i] -= 13;
		else
		str[i] = str[i];

		i++;
	}

	return (str);

}
