#include <stdio.h>

/**
 * main - print the alphapet
 *
 * Description: A C program that prints alphapet.
 *
 * Return: Always 0 (success)
*/

int main(void)

{
	char c;	

	for (c = 'a'; c <= 'z'; c++)
	putchar (c);
	putchar ('\n');
	return (0);
}
