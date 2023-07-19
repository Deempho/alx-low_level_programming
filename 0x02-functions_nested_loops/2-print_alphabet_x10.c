#include "main.h"

/**
 * print_alphabet_x10-print the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int no = 0;
	char ch;

	while (no++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
