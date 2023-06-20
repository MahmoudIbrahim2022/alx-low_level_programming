#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	char output[50]="_putchar\n";

	for (int i=0; i < sizeof (output); i++)
		{_putchar(output[i]);}

	return (0);
}
