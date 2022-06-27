#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct the dog infor
 * @name: type of char
 * @age: type of float
 * @owner: type of char
 *
 * Description: struct the dog infor
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

void free_dog(dog_t *d);

#endif
