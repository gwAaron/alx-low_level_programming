#include "main.h"

/**
 * main - function encodes a string using rot13.
 *
 * Return: Always 0.
 */

void rot13(char *text)
{
	for(;*text;text++)
    {
	    if(*text>'A'&&*text<'N'||*text>'a'&&*text<'n')*text+=13;
	else if(*text>'M'&&*text<'Z'||*text>'m'&&*text<'z')*text-=13;
    }
	return (0);
}
