#include <stdio.h>

/**
 * main - function that print alphabet in lowcase
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
