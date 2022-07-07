#include <stdio.h>
#include "main.h"

/**
 * main - returns fizz for 3 else if buzz for 5 and fizzbuzz for 3 and 5
 * Return: 0 for always true
 */
int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if (index % 3 == 0 && index % 5 == 0)
		{
			printf("fizzbuzz ");
		}
		else if ( index % 3 == 0)
		{
			printf("fizz ");
		}
		else if (index % 5 == 0)
		{
			if (index == 100)
				printf("buzz\n");
			else
			{
				printf("buzz ");
			}
		}
		else
		{
			printf("%d ",index);
		}
		
	}
}
