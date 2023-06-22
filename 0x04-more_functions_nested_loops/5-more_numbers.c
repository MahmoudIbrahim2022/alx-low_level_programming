#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14
 *
 *
 * Return:  void
 *
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			j = i - 10;
			_putchar('0' + 1);
		}
		else
		{
			j = i;
		}

		_putchar('0' + j);
	}
	_putchar('\n');
}
