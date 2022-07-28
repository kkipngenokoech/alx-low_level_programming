#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, index = 0, time = min;

	if (min > max)
	{
		return (0);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (index <= max - min)
		arr[index++] = time++;
	return (arr);
}
