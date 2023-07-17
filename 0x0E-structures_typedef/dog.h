#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog data type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif