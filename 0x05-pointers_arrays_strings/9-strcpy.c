#include "main.h"

/**
 * *_strcpy - copies the string.
 *
 * @dest: the buffer pointed.
 * @src: copies the string pointed.
 * Return:the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
