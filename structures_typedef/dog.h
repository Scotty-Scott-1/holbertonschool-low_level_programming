#ifndef DOG_H
#define DOG_H
/**
* struct dog - a description of a dog
* @name: dog's name
* @age: dog's age
* @owner: odg's owner
* Description: a struct with details of a dog
*
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);





#endif /* DOG_H */

