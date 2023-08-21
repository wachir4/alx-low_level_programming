#include "main.h"

/**
 * swap_int - swaps the values of 2  integers
 *@a:swaps and stores address of b
 *@b:swaps and stores address of a
 * Result:always 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
