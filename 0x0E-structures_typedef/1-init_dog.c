#include "dog.h"
/**
* init_dog - function that initializes the var of struct dog.
* dog *d: the pointer to the location of the initialization.
* name: the name in struct dog
* age: the age in struct dog
* owner: the owner in struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = &dog_t;
	dog_t.name = *name;
	dog_t.age = age;
	dog_t.owner = *owner;
}
