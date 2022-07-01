#include<stdio.h>
/**
 * main - printing thrree possible pair of digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int index;
	int innerindex,innerindexx;
	int innestindex, innestindexx;

	innerindex = '0';
	innestindex = '0';
	for (index = '0'; index <= '9'; index++)
	{
		for (innerindexx = innerindex; innerindexx <= '9'; innerindexx++)
		{
			for (innestindexx = innestindex; innestindexx <= '9'; innestindexx)
			{
				if (index == innerindexx && innerindexx == innestindexx)
				{
					continue;
				}
				putchar(index);
				putchar(innerindexx);
				putchar(innestindexx);
				if (index = '7' && innerindexx = '8' && innestindexx = '9')
				{
					putchar('\n');
				}
				else 
				{
					putchar(',');
					putchar(' ');
				}
			}
			innestindex++;
		}
		innerindex++;
	}
	return (0);
}
