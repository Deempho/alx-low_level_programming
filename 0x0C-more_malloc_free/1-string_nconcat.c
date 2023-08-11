#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of element to concantenate from s2
 *
 * Return: pointer to the new allocate memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, a, b;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		a = 0;
	else
	{
		for (a = 0; s2[a] != '\0'; a++)
			;
	}
	if (a > n)
		a = n;
	s = malloc(sizeof(char) * (i + a + 1));
	if (s == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		s[b] = s1[b];
	for (b = 0; b < a; b++)
		s[b + i] = s2[b];
	s[i + a] = '\0';
	return (s);
}
