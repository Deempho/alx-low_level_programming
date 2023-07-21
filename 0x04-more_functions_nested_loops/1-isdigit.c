#include "main.h"

/**
 * _isdigit - check if a character is a digit.
 *@c:This is the character to be checked.
 * Return:1 for uppernletter or 0 for any any less.
*/

int _isdigit(int c)
{
	int ch;

	for (ch = 48; ch <= 58 ; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
