#include"main.h"

/**
 * _strlen -  function that returns the length of a string.
 *
 * @s: the length of a string.
 *
 * Return: n
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;

	return (length);
}
