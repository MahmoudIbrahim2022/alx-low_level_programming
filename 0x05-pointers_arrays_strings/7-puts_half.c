#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str : The String to print its second half
 *
 * Return : void
 *
*/
void puts_half(char *str)
{

	int n = 0;
	int i;

	while (str[n] != '\0')
	n++;

	if (n % 2 == 0)
	i = n / 2;
	else
	i = (n / 2) + 1;

	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}

