#include <stdio.h>
#include "main.h"


/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return:  1 if c is lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
