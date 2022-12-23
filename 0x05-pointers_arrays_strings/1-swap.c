#include "main.h"

/**
 * swap_int - function that swaps value of two integers
 * @a: integer 1
 * @b: interger 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
