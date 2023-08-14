#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *new_dog - action a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *Return: new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
		return (NULL);
	return (new_dog);
}
