#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: buffer
 * @b: write
 * @n: size
 * Return: Nothing.
 */
void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int n = 10;
	int arr[n];
	memset(arr, 0, n*sizeof(arr[0]));
	printf("Array after memset()\n");
	printArray(arr, n);

	return 0;
}
