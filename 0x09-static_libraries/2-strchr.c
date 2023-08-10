#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 *
 * @c: the character to be located.
 * @s: the string to be searched.
 *
 * Return: pointer to the first occurrence of the character c.
 * NULL if c the character is not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
