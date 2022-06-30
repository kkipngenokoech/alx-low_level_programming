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
	printf("The size of a char:%lu byte(s)\n",(unsigned long)sizeof(charactera));
	printf("The size of an int:%lu byte(s)\n",(unsigned long)sizeof(integera));
	printf("The size of a float:%lu byte(s)\n",(unsigned long)sizeof(floata));
	printf("The size of a long int:%lu byte(s)",(unsigned long)sizeof(integerb));
	printf("The size of a long long integerc:%lu byte(s)",(unsigned long)sizeof(integerc));
	return (0);
}
