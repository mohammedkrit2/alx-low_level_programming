#include "main.h"
/**
 * _sqrt_recursion -  Write a function that
 *                   returns the natural square root of a number.
 * @n: sqw
 * @nm: root sqw
 * Return: int
 */
int sqw(long int n, long int nm);
int _sqrt_recursion(int n)
{
	return (sqw(n, 1));
}

/**
 * sqw - function for help
 * @n: var for find sqwr
 * @nm: sqwr
 * Return: var
 */
int sqw(long int n, long int nm)
{
	if (nm * nm == n)
		return (1);
	else if (nm * nm < n)
		return (sqw(n, nm + 1));
	else
		return (-1);
}
