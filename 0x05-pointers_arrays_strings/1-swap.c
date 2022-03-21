#include "main.h"
/**
 *  swap_int - swaps the values of two integers
 * @a and @b: pointers to the swap
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
