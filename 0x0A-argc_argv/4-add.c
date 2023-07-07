#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>



/**
 * main - adds positive numbers.
 * @argc: Number of Arguments
 * @argv: Arguments values
 *
 * Return: On success 0.
 * On error, 1 is returned,
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;
	int flag = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				flag = 1;
			}
			result += atoi(argv[i]);
		}
	}

	if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
		return (0);
	}
}
