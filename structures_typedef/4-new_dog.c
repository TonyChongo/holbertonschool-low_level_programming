#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Write a function that creates a new dog.
 * @name: Char type
 * @age: Float type
 * @owner: Char type
 * Return: Null if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, dogname, dogowner;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (dogname = 0; name[dogname]; dogname++)
		;
	for (dogowner = 0; owner[dogowner]; dogowner++)
		;

	ptr_dog->name = malloc(dogname + 1);
	ptr_dog->owner = malloc(dogowner + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i < dogname; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	ptr_dog->age = age;

	for (i = 0; i < dogowner; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}
