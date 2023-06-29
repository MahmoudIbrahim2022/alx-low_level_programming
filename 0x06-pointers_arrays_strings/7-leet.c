#include "main.h"


/**
 * leet -  encodes a string into 1337.
 * @str : string to be encoded into 1337.
 *
 * Return: encoded string
 *
*/


char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char origin[] = "aAeEoOtTlL";
	int code[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (str[i] != '\0')
	{
		j = 0;
		while (origin[j] != '\0')
		{
			if (origin[j] == str[i])
			str[i] = code[j] + 48;
			j++;
		}

		i++;
	}

	return (str);

}
