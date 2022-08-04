#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;

	va_list(valist, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && index < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
