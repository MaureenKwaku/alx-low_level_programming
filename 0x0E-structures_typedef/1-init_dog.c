#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: parameter to be checked
 * @name: parameter to be checked
 * @age: parameter to be checked
 * @owner: parameter to be checked
 * Return: 1 or 0
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
