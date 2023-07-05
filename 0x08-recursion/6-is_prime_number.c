#include "main.h"

/**
 * support_function_prime - returns 1 if the input integer is a prime number.
 * @n: The number
 * @i: Divisible
 *
 * Return: 1 if the input integer is a prime number.
 *
 */

int support_function_prime(int n, int i)
{

	if (n == i)
	return (1);

	else if ((n % i) == 0)
	return (0);

	else
	return (support_function_prime(n, i + 1));

}

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: The number
 *
 *
 * Return: 1 if the input integer is a prime number.
 *
 */

int is_prime_number(int n)
{

	if (n <= 0 || n == 1)
	return (0);

	else if (n == 2)
	return (1);

	else
	return (support_function_prime(n, 2));
}
