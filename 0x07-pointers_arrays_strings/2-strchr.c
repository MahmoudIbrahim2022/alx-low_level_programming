#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s : string where we locate string.
 * @c : character to locate.
 *
 * Return: pointer to the first occurrence of the character c in the string s.
 *
*/


char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
		i++;
	}

	return (p);

}
