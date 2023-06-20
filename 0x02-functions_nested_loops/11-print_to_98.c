#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints Numbers from n to 98
 * @n: The number to start print
 *
 * Return:  void
*/

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (n < 98)
		i++;
		else
		i--;
	}
	printf("98\n");
}
