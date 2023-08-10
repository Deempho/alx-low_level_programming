#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @needle:first occurrence of the substring.
 * @haystack:The string that we need to search in string needle.
 *
 * Return:a pointer to the beginning of the located substring.
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);

	}

	return (0);
}
