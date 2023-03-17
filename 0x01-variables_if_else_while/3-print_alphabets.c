#include <stdio.h>

/**
 * main - print the upper and lower cases alphapet
 *
 * Description: A C program that prints alphapet.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
