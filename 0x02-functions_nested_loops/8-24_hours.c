#include "main.h"

/**
 *  jack_bauer - prints every minute of the day of Jack Bauer.i
 *
 * Return:Always (0)
 */
void jack_bauer(void)
{
	int hour, minute;

	for (minute = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}