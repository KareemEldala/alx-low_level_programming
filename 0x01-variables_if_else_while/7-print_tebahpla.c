#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printid function.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char n;

	for (n =  'z'; n >= 'a'; n--)
	putchar(n);
	putchar('\n');

	return (0);
}
