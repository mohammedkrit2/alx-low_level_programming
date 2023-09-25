#include "main.h"
/**
 *  _strspn -  function that gets the length of a prefix substring.
 *  @s: string
 *  @accept: byte
 *  Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, m;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (m = 0; accept[m] != s[c]; m++)
		{
			if (accept[m] == '\0')
				return (c);
		}
	}
	return (c);
}
