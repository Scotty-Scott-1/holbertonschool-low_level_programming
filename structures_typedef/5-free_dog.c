#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - passes args/members from dog
* @d: dog
* Description: free members then free struct
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
