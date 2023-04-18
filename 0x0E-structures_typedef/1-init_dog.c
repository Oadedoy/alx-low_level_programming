#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: new variable of type struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Returns: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
