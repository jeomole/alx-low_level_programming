#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - prints a struct dog
  * @d: pointer to a struct variable
  *
  * Return: value is oid
  */
void print_dog(struct dog *d)
{
	if (name == NULL)
		d->name = (nil);
	if (age == NULL)
		d->age = (nil);
	if (owner == NULL)
		d->owner = (nil);

	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
