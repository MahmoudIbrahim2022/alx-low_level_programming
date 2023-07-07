#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: Number of Arguments
 * @argv: Arguments values
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (*(*(argv) + i) != '\0')
	{
		_putchar(*(*(argv) + i));
		i++;
	}

	_putchar('\n');

	return (0);
}
