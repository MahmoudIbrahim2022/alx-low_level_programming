#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a : square matrix of integer.
 * @size : square matrix size.
 *
 * Return: void.
 *
*/

void print_diagsums(int *a, int size)
{

	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			sum1 += a[i][j];

			if ((i + j) == (size - 1))
			sum2 += a[i][j];
		}


	}

	printf("%d, %d\n", sum1, sum2);


}
