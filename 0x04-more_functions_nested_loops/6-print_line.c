#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n : number of segments-underscores
 *
 * Return:  void
 *
*/

void print_line(int n)
{
	int i;
	int j;

	if (n <= 0)
	j = 0;
	else
	j = n;

	for (i = 0; i < j; i++)
	_putchar(95);

	_putchar('\n');
}
