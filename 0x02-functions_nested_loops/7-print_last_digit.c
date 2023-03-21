/**
 *print_last_digit -  if n is greater than zero,
 *          0 if n is zero and - if n is less
 *          than 0
 *
 *@n: takes input from other function.
 *
 * Return: 1 if +, 0 if 0 and -1 if
 *
*/

int print_last_digit(int n)
{
	int lasDigit;

	if (n < 0)
		lasDigit = -1 * (n % 10);
	else
		lasDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
