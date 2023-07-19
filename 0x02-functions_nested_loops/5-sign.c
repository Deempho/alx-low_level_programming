#include "main.h"

/**
 * print_sign - checks for alphabetic character.
 * @n:The character to be checked
 *
 * Return:1 for positive no,-1 for negative no, zero for everything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
