#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: apointer to an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **printgrid;
	int index, column;

	if (width < 1 || height < 1)
		return (NULL);
	printgrid = malloc(height * sizeof(int *));
	if (printgrid == NULL)
	{
		free(printgrid);
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		printgrid[index] = malloc(width * sizeof(int));
		if (printgrid == NULL)
		{
			for (index--; index >= 0;index--)
				free(printgrid[index]);
			free(printgrid);
			return (NULL);
		}
	}
	for (index = 0; index < height; index++)
		for (column = 0; column < width; column++)
			printgrid[index][column] = 0;
	return (printgrid);
}
