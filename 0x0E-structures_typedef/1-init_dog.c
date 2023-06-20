#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - structure of type dog
 * @d: pointer to struct dog
 * @name: first member
 * @age: second member
 * @age: third member
 * @owner: fourth member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
