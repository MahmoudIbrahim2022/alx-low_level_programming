#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : The String to print in reverse
 *
 * Return : void
 *
*/
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	i++;


	for (j = 0; j < i; j++)
	_putchar(s[i - j - 1]);

	_putchar('\n');

}
