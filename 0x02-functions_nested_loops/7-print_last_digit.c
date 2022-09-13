#include "main.h"

/**
 * prints the last digit of a number
 * @n: take ln an integer
 * Return: result output
 */
int print_last_digit(int)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
