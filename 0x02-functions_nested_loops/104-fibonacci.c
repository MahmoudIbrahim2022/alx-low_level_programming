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

	printf("%0.0lf, ", a);
	printf("%0.0lf, ", b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 98)
		printf("%0.0lf\n", c);
		else
		printf("%0.0lf, ", c);
	}
	return (0);
}
