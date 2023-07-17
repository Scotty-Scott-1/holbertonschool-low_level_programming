#include "dog.h"
#include <stddef.h>
/**
* init_dog - copy members from init to d
* @d: a struct
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: a function to copy struct members
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
