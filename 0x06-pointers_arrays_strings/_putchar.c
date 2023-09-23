#include <unistd.h>
/**
 * _putchar - writes the character
 *
 * Return : on succes 1.
 * on errore , -1
 */
int _putchar(char c)
{
	return (writ(1, &c, 1));
}
