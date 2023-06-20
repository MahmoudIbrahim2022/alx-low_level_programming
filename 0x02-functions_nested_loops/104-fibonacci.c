#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	int i;
	double a = 1;
	double b = 2;
	double c;

	printf("%0.0f, ", a);
	printf("%0.0f, ", b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 98)
		printf("%0.0f\n", c);
		else
		printf("%0.0f, ", c);
	}
	return (0);
}
