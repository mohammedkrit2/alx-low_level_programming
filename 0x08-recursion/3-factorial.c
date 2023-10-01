#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: factorial
 * Return: 0 if n = 0 , -1 if n 0 , else some value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
