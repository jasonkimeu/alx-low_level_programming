#include <string.h>
#include "dog.h"

/**
 * init_dog - fn to fill struct with values
 * @d: pointer to a struct
 * @name: name value
 * @age: age value
 * @owner: owner value
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
