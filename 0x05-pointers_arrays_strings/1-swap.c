#include "main.h"
#include <stdio.h>
/**
 * swap_int(int *a, int *b) - it swaps integers of both a and b
 * @a:parameter to be swapped
 * @b:parameter to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = &a;
	a = *b;
	b = *temp;
}
