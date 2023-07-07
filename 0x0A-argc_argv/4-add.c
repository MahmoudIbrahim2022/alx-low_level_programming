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
	int i;
	int flag = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*(argv[i]) != 48 && atoi(argv[i]) == 0)
			flag = 1;
			else if (atoi(argv[i]) < 0)
			result = result;
			else
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
