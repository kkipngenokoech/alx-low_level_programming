#include <stdio.h>
#include "main.h"
/**
 * print_array - function to print array
 * @a: array parameter to be passed
 * @n: number of elements to be printed in an array
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter != (n - 1))
			printf(", ");
	}
	printf("\n");
}
