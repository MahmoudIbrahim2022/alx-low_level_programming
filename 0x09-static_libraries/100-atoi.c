#include "main.h"

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
