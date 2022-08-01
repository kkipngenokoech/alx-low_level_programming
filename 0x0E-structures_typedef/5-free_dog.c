#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - method to free memory allocated to dog struct
 * @d: pointer to the dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free (d);
	}
}
