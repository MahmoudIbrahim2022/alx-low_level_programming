#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line..
 * @separator: seperator between numbers
 * @n: number of arguments
 *
 * Return: void.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s != NULL ? s : "nil");

		if (separator != NULL && i < (n - 1))
		printf("%s", separator);
	}

	va_end(args);

	printf("\n");

}
