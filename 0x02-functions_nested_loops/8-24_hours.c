#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/*print the hour in 2 digits*/
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			/*print the minutes in 2 digits*/
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}