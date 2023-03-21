#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function
 * description - Write a function that initialize a variable of type struct dog
 * @d: argument for the function
 * @name: argument for the function
 * @age: argument for the function
 * @owner: argument for the function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
