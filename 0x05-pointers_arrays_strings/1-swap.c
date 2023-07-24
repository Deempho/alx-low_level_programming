#include"main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the first interger to be swapped
 * @b: the second interger to be swapped
 *
 * Return:nothing
 */
void swap_int(int *a, int *b)
{
	int t = *a;
		*a = *b;
		*b = t;
}
