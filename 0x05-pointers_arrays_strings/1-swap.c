#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 *Return: Always 0 (Success).
 */

int main()
{
	int a=98, b=42;

	printf("Before swap a = %d\n b = %d\n", a, b);
	a = 98 + 20;
	b = a - b;
	a = a - b;
	printf("After swap a = %d\n b = %d", a, b);
	return (0);
}
