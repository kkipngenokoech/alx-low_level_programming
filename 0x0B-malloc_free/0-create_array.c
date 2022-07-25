#include "main.h"
#include <stdlib>
/**
 * create_array - creates an array of characters
 * @size: size of the array created
 * @c: storage character
 */
char *create_array(unsigned int size, char c)
{
	char character;
	unsigned int index;

	if (size == 0)
		return (NULL);
	character = malloc(sizeof(c) * size);
	if (character == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		character[index] = c;
	return (character);
}
