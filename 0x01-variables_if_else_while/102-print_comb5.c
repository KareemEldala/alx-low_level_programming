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
	int p, q;

	for (p = 0; p <= 98; p++)
	{
	for (q = p + 1; q <= 99; q++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putcahr((q / 10) + '0');
	putchar((q % 10) + '0');
	if (p == 98 && q == 99)
        continue;
	putchar(',');
	putchar(' ');
        }
        }
	putchar('\n');
	return (0);
}
                                                   1,14          Top
