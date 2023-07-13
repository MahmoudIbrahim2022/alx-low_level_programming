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
	int i, len;
	int *s;

	if (min > max)
	return (0);

	len = max - min + 1;

	s = malloc(sizeof(int) * len);

	if (s == NULL)
	return (0);

	for (i = 0; i < len; i++)
	s[i] = min++;

	return (s);

}
