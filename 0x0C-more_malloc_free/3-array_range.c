#include <stdlib.h>
#include "main.h"


/**
 * array_range - creates an array of integers.
 * @min: min number.
 * @max: max number.
 *
 * Return: pointer to the newly created array.
 *
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
	return (0);

	s = malloc(sizeof(int) * (max - min + 1));

	if (s == NULL)
	return (0);

	for (i = min; i <= max; i++)
	s[i] = i;

	return (s);

}
