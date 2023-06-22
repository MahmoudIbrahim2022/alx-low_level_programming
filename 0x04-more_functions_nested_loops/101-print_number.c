#include "main.h"

/**
 * print_number - prints an integer
 * @n : Integer to Print
 *
 * Return:  void
 *
*/

void print_number(int n)
{
	int digit;

	if (n == 0)
	return;


	digit = n % 10;
	print_number(n / 10);
	_putchar('0' + digit);

}
