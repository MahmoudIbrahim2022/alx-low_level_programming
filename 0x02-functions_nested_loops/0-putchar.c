#include <stdio.h>
#include "main.h"

int _putchar(char c);
/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	char output[50]="_putchar\n";
	int i;

	for (i=0; i < 50; i++)
		{_putchar(output[i]);}

	return (0);
}
