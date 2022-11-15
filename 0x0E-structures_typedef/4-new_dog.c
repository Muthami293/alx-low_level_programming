#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: struct dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	int i, len_name, len_owner;

	ptr_dog = malloc(sizeof(*ptr_dog));

	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}
	for (len_name = 0; name[len_name]; len_name++)
		;

	for (len_owner = 0; owner[len_owner]; len_owner++)
		;

	ptr_dog->name = malloc(len_name + 1);

	ptr_dog->owner = malloc(len_owner + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';
	ptr_dog->age = age;
	for (i = 0; i < len_owner; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}
