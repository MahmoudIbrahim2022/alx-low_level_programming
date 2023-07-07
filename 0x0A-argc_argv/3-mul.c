#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>



/**
 * main - prints all arguments it receives.
 * @argc: Number of Arguments
 * @argv: Arguments values
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;

	(void) argc;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);

		return (0);
	}
}
