#include "dog.h"
#include <stdio.h>

/**
  * print_dog - print a struct dog
  * @d: struct dog print
  * Return: void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	/* ternary operator */

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
}
