#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d->name != NULL)
	d->name = name;

	if (d->age >= 0)
	d->age = age;

	if (d->owner != NULL)
	d->owner = owner;
}
