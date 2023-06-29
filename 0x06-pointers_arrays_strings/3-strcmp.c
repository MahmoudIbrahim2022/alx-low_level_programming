#include "main.h"


/**
 * _strcmp -  compare Two Strings.
 * @s1 : First String
 * @s2 :  Second String
 *
 * Return: ASCII difference value of the first two non matching characters
 *
*/


int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp = 0;
	int flag = 1;


	while ((s1[i] != '\0' || s2[i] != '\0') && flag != 0)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			flag = 0;
		}

		i++;
	}

	return (cmp);

}
