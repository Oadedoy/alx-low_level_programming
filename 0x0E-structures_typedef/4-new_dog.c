#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - this function creates a new dog
 * @name: pointer that holds string name
 * @age: parameter that holds data for age
 * @owner: pointer that holds string owner
 *
 * Return: returns  to pointer of typedef variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;
	int d;

	adog = malloc(sizeof(dog_t));
	if (adog == NULL)
		return (NULL);
	adog->name = malloc(sizeof(name) + 1);
	if (!adog->name)
	{
		free(adog);
		return (NULL);
	}
	adog->owner = malloc(sizeof(owner) + 1);
	if (!adog->owner)
	{
		free(adog->name);
		free(adog);
		return (NULL);
	}
	for (d = 0; name[d]; d++)
		adog->name[d] = name[d];
	adog->name[d] = '\0';
	adog->age = age;
	for (d = 0; owner[d]; d++)
		adog->owner[d] = owner[d];
	adog->owner[d] = '\0';
	return (adog);
}
