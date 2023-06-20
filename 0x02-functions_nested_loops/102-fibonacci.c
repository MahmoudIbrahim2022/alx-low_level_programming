#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
*/
int main(void)
{
	int i;
	int array[50];
	array[0] = 1;
	array[1] = 2;

	for (i = 2; i < 50; i++)
	{
		array[i] = array[i-1] + array[i-2];
		if (i == 49)
		printf("%d\n", array[i]);
		else
		printf("%d, ", array[i]);
	}

	return (0);
}
