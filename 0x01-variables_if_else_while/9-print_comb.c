#include<stdio.h>

/**
 * main - printing numbers from 0 to 9 in ascending order
 *
 * Return: 0 if success
 */
int main(void)
{
	int integer;

	for (integer = '0'; integer <= '9'; integer++)
	{
		putchar(integer);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
