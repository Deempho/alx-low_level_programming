#include"main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s:  prints a string.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int string;

	for (string = 0; s[string] != '\0'; s++)
		;
	for (string = string - 1; s[string] != '\0'; s--)
	{
		_putchar(s[string]);
	}
	_putchar('\n');
}
