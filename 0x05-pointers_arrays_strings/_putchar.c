#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: the character to print
 *
 * Return: on sucess
 * on error, -1 is returned, and error is set apprepriately.
 */

int _putchar(char c)
{
	return (wite(1, &c, 1));
}
