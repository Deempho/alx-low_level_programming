#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: char of a string
 * @src: char of a string
 * @n: count of byte
 * Return:pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
