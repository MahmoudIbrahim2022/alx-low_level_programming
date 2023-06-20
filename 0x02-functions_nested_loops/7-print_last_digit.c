#include <stdio.h>
#include "main.h"


/**
 * print_last_digit - prints last digit of an integer
 * @n: The number to print its last digit
 *
 * Return:  Last digit
*/

int print_last_digit(int n)
{
	int result = n % 10;

	_putchar('0' + result);

	return (result);
}
