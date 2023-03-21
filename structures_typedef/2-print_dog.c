#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function
 * description - Write a function that prints a struct dog
 * @d: argument for the function
 */

void print_dog(struct dog *d)
{
	 if (d == NULL)
				return;
		if (d->name == NULL)
				printf("name: (nil)\n");
		else
				printf("name: %s\n", d->name);
		if (d->age < 0)
				printf("age: (nil)\n");
		else
				printf("age: %f\n", d->age);
		if (d->owner == NULL)
				printf("owner: (nil)\n");
		else
				printf("owner: %s\n", d->owner);
}
