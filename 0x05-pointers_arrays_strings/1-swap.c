#include "main.h"

/**
 * swap_int - To swap the values of two integers.
 * @a:Pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
