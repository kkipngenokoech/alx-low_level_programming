#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of jack bauer minutes
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
			_putchar('\n');
		}
	}
}
