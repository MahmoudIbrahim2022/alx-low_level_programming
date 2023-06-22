#include "main.h"

/**
 * print_positive_number - prints a positive integer
 * @n : Integer to Print
 *
 * Return:  void
 *
*/

void print_positive_number(int n)
{

	int digit;

	if (n == 0)
	return;


	digit = n % 10;
	print_positive_number(n / 10);
	_putchar('0' + digit);
}

/**
 * print_number - prints an integer
 * @n : Integer to Print
 *
 * Return:  void
 *
*/

void print_number(int n)
{

	if (n == 0)
	_putchar(48);
	else if (n < 0)
	{
		n *= -1;
		_putchar(45);
		print_positive_number(n);
	}
	else
	print_positive_number(n);



}
