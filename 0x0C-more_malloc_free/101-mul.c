#include "main.h"
#include <stdlib.h>


/**
 * printstr - print String.
 * @s: String to print
 *
 * Return: void.
 */


void printstr(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	_putchar(s[i++]);

}


/**
 * printnum - print Number.
 * @num: Number to print.
 *
 * Return: void.
 */


void printnum(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	printnum(num / 10);

	_putchar(num % 10 + '0');

}

/**
 * _atoi - convert a string to an integer
 * @s : The String to convert
 *
 * Return: the Integer
 *
*/


int _atoi(char *s)
{
	int i, j = 0, size = 0, number, power = 1, result = 0, count = 0;

	while (s[size] != '\0')
	size++;

	for (i = 0; i < size; i++)
	{
		number = (int) s[size - i - 1];
		if (number >= 48 && number <= 57)
		{
			if (j > 0)
			power *= 10;
			else
			power = 1;
			result += ((number - 48) * power);
			j++;
		}

		else if (number == 45 && j >= i)
		count++;

	}

	if (count % 2 != 0)
	result = 0 - result;

	return (result);

}


/**
 * main - multiplies two positive numbers.
 * @argc: Number of Arguments
 * @argv: Arguments Values
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int mul = 1;

	if (argc < 3)
	{
		printstr("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printstr("Error\n");
				exit(98);
			}

			j++;
		}
		mul *= _atoi(argv[i]);
	}

	printnum(mul);
	_putchar('\n');

	return (0);

}






