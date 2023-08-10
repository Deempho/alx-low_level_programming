#include "main.h"

/**
 * _isupper - check if a letter is upper.
 *@c:This is the character to be checked.
 * Return:1 for uppernletter or 0 for any any less.
*/

int _isupper(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
