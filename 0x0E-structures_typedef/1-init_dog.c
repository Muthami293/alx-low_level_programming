#include "dog.h"
#include <stdio.h>

/**
  * init_dog - function that initializaes struct dog
  * @name: name member
  * @age: age member
  * @owner: owner members
  * @d: the structure for dog
  * Return: void
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
