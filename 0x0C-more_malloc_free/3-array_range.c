#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 *         NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
