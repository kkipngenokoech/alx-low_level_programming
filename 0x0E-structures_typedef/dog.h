#include <stdio.h>
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: this is a struct about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
