#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a : First Integer to Swap.
 * @b : Second Integer to Swap.
 *
 * Return : void
 *
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
