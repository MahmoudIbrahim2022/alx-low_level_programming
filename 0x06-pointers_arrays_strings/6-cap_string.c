#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @str : string to capitalize
 *
 * Return: capitalize string
 *
*/


char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char sep[] = " ,;.!?\"(){}\n\t";

	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (sep[j] == str[i] && str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] -= 32;
			j++;
		}

		i++;
	}

	return (str);

}
