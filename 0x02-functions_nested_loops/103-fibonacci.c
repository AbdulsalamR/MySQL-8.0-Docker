#include <stdio.h>

/**
 * main - prints the sum of even fibonnaci numbers that are less than 4,000,000
 *
 * Return: Always 0 (Success)
**/

int main(void)
{
	int i;
	unsigned long int j, k, l, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
		}

		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", sum);

	return (0);
}
