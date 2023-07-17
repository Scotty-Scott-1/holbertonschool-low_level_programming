#include "dog.h"
#include <stdio.h>
/**
* print_dog - print members from d
* @d: struct d
* Description: a function
*
* Return: void
*
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
