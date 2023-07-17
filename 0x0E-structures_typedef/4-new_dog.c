#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s : The String to find its length
 *
 * Return: the length of a string
 *
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	length++;

	return (length);

}

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest : The Destination String
 * @src :  The Source String
 *
 * Return: the pointer to dest
 *
*/

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i]; i++)
	dest[i] = src[i];
	dest[i] = '\0';

	return (dest);

}

/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the new dog.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;

	if (!name || age < 0 || !owner)
	return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * _strlen(name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}


	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);

}
