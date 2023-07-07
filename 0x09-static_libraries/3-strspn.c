#include "main.h"


/**
 * _strspn -   gets the length of a prefix substring.
 * @s : string to find prefix substring.
 * @accept : prefix substring.
 *
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 *
*/


unsigned int _strspn(char *s, char *accept)
{

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
		{
			k = i;
			break;
		}
		else
		i++;
	}

	return (k);

}
