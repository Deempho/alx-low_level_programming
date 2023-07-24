#include"main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str:  prints a string.
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\0');
}
