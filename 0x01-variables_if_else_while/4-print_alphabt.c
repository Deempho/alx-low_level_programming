#include <stdio.h>

/**
 * main -Print all the letters except q and e.
 *
 * Return:Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
