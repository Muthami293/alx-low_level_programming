#ifndef __DOG_H__
#define __DOG_H__
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

/**
  * struct dog - structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of the dog
  *
  * Description: Structure for dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int lenstr(char *str);

char *cpystr(char *dest, char *src);


#endif
