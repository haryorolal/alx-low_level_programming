#include "dog.h"
/**
 * init_dog - function that initialize a variable of type
 * @d: first argument
 * @name: second argument
 * @age: third argument
 * @owner: forth argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dogs;
	*d = dogs;
	d->name = name;
	d->age = age;
}
