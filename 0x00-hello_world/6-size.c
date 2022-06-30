#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integera;
	long int integerb;
	long long int integerc;
	char charactera;
	float floata;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(charactera));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(integera));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(integerb));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(integerc));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(floata));
	return (0);
}
