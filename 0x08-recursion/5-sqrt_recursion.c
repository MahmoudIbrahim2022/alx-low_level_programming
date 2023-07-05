#include "main.h"

/**
 * support_function - returns the natural square root of a number.
 * @number: The number
 * @root: The root
 *
 * Return: returns the natural square root of a number.
 *
 */

int support_function(int number, int root)
{
	if ((root * root) > number)
	return (-1);

	else if ((root * root) == number)
	return (root);

	else
	return (support_function(number, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number
 *
 *
 * Return: returns the natural square root of a number.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (support_function(n, 0));

}
