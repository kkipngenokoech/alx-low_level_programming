#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int index, column, counter;
	dog_t *newdog;

	index = 0;
	column = 0;
	while (name[index] != '\0')
	{
		index++;
	}
	while (owner[column] != '\0')
		column++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(index * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (counter = 0; counter <= index; counter++)
		newdog->name[counter] = name[counter];
	newdog->age = age;
	newdog->owner = malloc(column * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (counter = 0; counter <= column; counter++)
		newdog->owner[counter] = owner[counter];
	return (newdog);
}
