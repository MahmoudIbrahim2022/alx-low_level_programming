#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string
 *
 * Return: the length of a string.
 *
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (*s == '\0')
	return (i);
	else
	{
		i++;
		return (_strlen_recursion(++s));
	}


}
