#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: parameter where the counting starts
 */
void print_to_98(int n)
{
	int start;

	start = n;
	if (start <= 98)
	{
		for (start = n; start <= 98; start++)
		{
			if (start == 98)
				printf("%d\n", start);
			else
				printf("%d, ", start);
		}
	}
	else
	{
		for (start = n; start >= 98; start--)
		{
			if (start == 98)
				printf("%d\n", start);
			else
				printf("%d, ", start);
		}
	}
}
