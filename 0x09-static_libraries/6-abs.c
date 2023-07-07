#include <stdio.h>
#include "main.h"


/**
 * _abs - computes the absolute value of an integer
 * @n: The number to compute its absolute value
 *
 * Return:  Absolute Value
*/

int _abs(int n)
{
	int result;

	if (n < 0)
	result = 0 - n;
	else
	result = n;

	return (result);

}
