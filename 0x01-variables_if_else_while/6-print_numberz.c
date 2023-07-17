#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0.
*
* Return:Always 0.
*/
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	putchar('\n');

	return (0);
}
