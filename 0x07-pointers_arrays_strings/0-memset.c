#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: buffer
 * @b: write
 * @n: size
 *
 * Return: Nothing.
 */

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      _putchar("%d ", arr[i]);
}
  
int main()
{
    int n = 10;
    int arr[n];
  
    // Fill whole array with 0.
    memset(arr, 0, n*sizeof(arr[0]));
    _putchar("Array after memset()\n");
    printArray(arr, n);
  
    return 0;
}
