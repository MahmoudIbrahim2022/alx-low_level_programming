#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * Return:  1 (Error)
*/
int main(void)
{
	char output[50]="_putchar\n";

	for (int i=0; i < sizeof (output); i++)
		{_putchar(output[i]);}

	return (0);
}
