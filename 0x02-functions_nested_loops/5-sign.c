#include "main.h"

/**
 *print_sign - checks for alphabetic character.
 *@n:The character to be checked
 *
 * Return:1 if c is lowercase,0 otherwise
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
	_putchar('46);
	return (0);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
