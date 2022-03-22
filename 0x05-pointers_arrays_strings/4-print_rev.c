#include "main.h"

/**
 * print_rev - print reverse characters.
 * @s: validate the character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		print_rev(s[i]);
	}
	print_rev('\n');
}
