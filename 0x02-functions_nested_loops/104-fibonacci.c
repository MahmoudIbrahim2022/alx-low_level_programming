#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	int i;
	long double a = 1;
	long double b = 2;
	long double c;

	printf("%0.0LF, ", a);
	printf("%0.0LF, ", b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 98)
		printf("%0.0LF\n", c);
		else
		printf("%0.0LF, ", c);
	}
	return (0);
}

