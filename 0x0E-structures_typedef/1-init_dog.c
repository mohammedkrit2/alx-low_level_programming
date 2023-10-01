#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: make sure null dosn exist
 * @name: name of dog
 * @age: hes age
 * @owner: owner of the dog
 *
 * Return: without
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
