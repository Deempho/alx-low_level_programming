#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c:The character to be checked
 *
 * Return:1 if c is lowercase,0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
