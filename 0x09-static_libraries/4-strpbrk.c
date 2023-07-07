#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : searched string.
 * @accept : character set.
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept.
 *
*/


char *_strpbrk(char *s, char *accept)
{
	char *scanp;
	int c, sc;

	while ((c = *s++) != 0)
	{
		for (scanp = accept; (sc = *scanp++) != 0;)
		{
			if (sc == c)
			return ((char *)(s - 1));
		}
	}

	return (NULL);

}
