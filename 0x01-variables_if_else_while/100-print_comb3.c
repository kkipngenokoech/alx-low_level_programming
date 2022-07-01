#include<stdio.h>
/**
 * main - prints numbers from 0 to 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int index;
	int innerindex;

	innerindex = '0';
	for (index = '0'; index <= '9'; index++)
	{
		for (innerindex <= '9'; innerindex++)
		{
			putchar(index);
			putchar(innerindex);
			while (innerindex != '9' && innerindex != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
