#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long c;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 97)
		printf("%lu\n", c);
		else
		printf("%lu, ", c);
	}
	return (0);
}
