#include "main.h"
#include <stdio.h>
/**
 * reverse_array -  reversing an array using a function
 * @a; arrray passed
 * @n: number of elements in an araay
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int counter, temp;

	n = n-1;
	for (counter = 0; counter < n; counter++,n--)
	{
		temp = a[counter];
		a[counter] = a[n];
		a[n] = temp;
	}
}
