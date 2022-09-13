#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
**/

int main(void)
{
	int i;
	long int j, k, l;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}

		l = j + k;
		j = k;
		k = l;
	}

	return (0);
}
