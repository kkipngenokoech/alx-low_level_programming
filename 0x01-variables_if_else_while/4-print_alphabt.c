#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
