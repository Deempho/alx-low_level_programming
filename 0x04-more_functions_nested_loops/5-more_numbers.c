#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 *
 * Return:Always (0).
*/

void more_numbers(void)
{
	int ch;
	int i = 0;
	int b;

		while (i < 10)
		{
			i++;
			for (ch = 0; ch <= 14; ch++)
			{
				b = ch;

				if (b > 9)
				{
					b = 1;
				}

				_putchar('0' + b);

				if (ch > 9)
				{
					_putchar('0' + ch - 10);
				}
			}
			_putchar('\n');
		}
}
