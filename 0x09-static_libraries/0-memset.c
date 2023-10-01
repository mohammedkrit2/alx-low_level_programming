#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: max byte i should be to use it .
 * @b: the constan 0x00
 * @s: the pointer to print the b
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; n > 0; c++)
	{
		s[c] = b;
		n--;
	}

	return (s);
}
