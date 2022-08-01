#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a structure of the type dog
 * @d:array of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: this is a dog structure
 */
void  init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
