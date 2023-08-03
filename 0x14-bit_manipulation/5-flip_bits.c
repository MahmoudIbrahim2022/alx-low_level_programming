#include "main.h"


/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: First Number
 * @m: Second index
 *
 * Return: returns the number of bits you would need
 * to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
		count++;
		xorval = xorval >> 1;
	}
	return (count);

}
