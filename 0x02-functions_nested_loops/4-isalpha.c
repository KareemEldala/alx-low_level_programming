#include "main.h"

/**
 * _isalphat  checks if character is a letter
 *		both lowercase or uppercase
 *
 *@c: takes input from other function.
 *
 * Return: 1 is c if true else 0
*/

int _isalphat(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
