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
 *
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
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}*/
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		dog->name = (char *) malloc(strlen(name) + 1);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
	strcpy(dog->name, name);
	dog->age = age;
	dog->owner = (char *) malloc(strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);
		return (dog);
}
