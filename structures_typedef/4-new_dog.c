#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - function that passes args/members
* @name: dog's name
* @age: dog's age
* @owner: dog's owne
* Description: a function that adds a new dog
*
* Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog2 = malloc(sizeof(dog_t));
	int i = 0, j = 0, ownerlen = 0, namelen = 0;

	if (newdog2 == NULL)
		return (NULL);
	while (name[namelen] != '\0')
		namelen++;
	while (owner[ownerlen] != '\0')
		ownerlen++;
	newdog2->name = malloc(namelen + 1);
	if (newdog2->name == NULL)
	{
		free(newdog2);
		free(newdog2->name);
		free(newdog2->owner);
		return (NULL);
	}
	newdog2->owner = malloc(ownerlen + 1);
	if (newdog2->owner == NULL)
	{
		free(newdog2->name);
		free(newdog2->owner);
		free(newdog2);
		return (NULL);
	}
	while (i < namelen)
	{
		newdog2->name[i] = name[i];
		i++;
	}
	newdog2->name[i] = '\0';
	newdog2->age = age;
	while (j < ownerlen)
	{
		newdog2->owner[j] = owner[j];
		j++;
	}
	newdog2->owner[j] = '\0';
return (newdog2);

}
