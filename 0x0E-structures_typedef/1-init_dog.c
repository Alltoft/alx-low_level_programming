#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * init_dog - intializes dogs info
 * @d: the strcut used
 * @name: namr of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	strcpy(d->owner, owner);
	strcpy(d->name, name);
}
