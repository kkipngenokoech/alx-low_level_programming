#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: parameter where the counting starts
 */
void print_to_98(int n)
{
	int start;

	for (start = n; start <= 98; start++)
	{
		printf("%d, ", start);
	}
}
