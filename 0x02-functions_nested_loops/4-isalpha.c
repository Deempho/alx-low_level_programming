#include "main.h"

/**
 *_isalpha - checks for alphabetic character.
 *@c:The character to be checked
 *
 * Return:1 if c is lowercase,0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
