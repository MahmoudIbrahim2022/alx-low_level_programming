#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : size of triangle
 *
 * Return:  void
 *
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		size = 0;
		_putchar('\n');
	}

	for (i = 0; i <= size; i++)
	{
		for (j = size; j > i; j--)
		_putchar(32);
		for (k = 0; k < i; k++)
		_putchar(35);
		if (i != size)
		_putchar('\n');
	}
}
