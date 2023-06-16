#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 10; n1++)
	{
	for (n2 = n1 + 1; n2 < 10; n2++)
		{
		if (n1 == n2)
		continue;
		putchar('0' + n1);
		putchar('0' + n2);
		if (n1 < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
