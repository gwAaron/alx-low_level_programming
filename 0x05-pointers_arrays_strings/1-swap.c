#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 *Return: Always 0 (Success)
 */

void swap(int a, int b)
{
	a ^= b; 
	b ^= a;
	a ^= b;
}
