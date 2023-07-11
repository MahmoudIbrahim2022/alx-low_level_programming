#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s : The String to find its length
 *
 * Return: the length of a string
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);

}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments counter
 * @av: arguments value
 *
 * Return: pointer to a new string.
 *
 */

char *argstostr(int ac, char **av)
{

	int i, j, k = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (0);

	for (i = 0; i < ac; i++, size++)
	size += _strlen(av[i]);


	s = malloc((size + 1) * sizeof(char));

	if (s == 0)
	return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}

	return (s);

}
