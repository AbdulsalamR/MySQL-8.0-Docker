#include "main.h"

/**
 * _abs - function that prints a ablosute value of number
 * @n: takes in an integer
 * Return: 1 if greater than 0, 0 iz zero and -1 if less than 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (-n);
}
