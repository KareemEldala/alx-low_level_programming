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
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q);
	putchat(low);
	}
	putchar('\n');
        return (0);
}
