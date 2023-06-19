#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this function initializes a variable of type struct dog
 * @d: parameter of type struct dog
 * @name: pointer to string name
 * @age: parameter for age
 * @owner: pointer to string owner
 *
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
