#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	int n;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
	printf("and is greater than 5\n");
	else if (n < 6 && n != 0)
	printf("and is less than 6");
	else
	printf("and is zero\n");
	return (0);
}
