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

	return (*s ? 1 + _strlen_recursion(s + 1) : 0);

}
