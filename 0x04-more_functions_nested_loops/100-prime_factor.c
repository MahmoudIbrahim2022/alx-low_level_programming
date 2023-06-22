#include "stdio.h"

/**
 * main - Entry point
 *
 *
 * Return:  0 (Success)
*/
int main(void)
{
	long int n = 612852475143;
	long int div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%li\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
