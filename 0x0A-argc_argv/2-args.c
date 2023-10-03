#include <stdio.h>
/**
 * main - function that prints all arguments it receives.
 * @argc: int
 * @argv: ls
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int k = 0;

	while (argc--)
	{
		printf("%s\n", argv[k]);
		k++;
	}
	return (0);
}
