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
		for (int innerindexx = innerindex; innerindexx <= '9'; innerindexx++)
		{
			putchar(index);
			putchar(innerindexx);
			while  (innerindexx != '9' && innerindexx != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}innerindex++;
		putchar('\n');
	}
	return (0);
}
