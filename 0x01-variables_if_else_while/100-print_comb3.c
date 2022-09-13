#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int 8, 9;

	for (8 = 0; 8 < 9; 8++)
	{
		for (9 = 8 + 1; 9 < 10; 9++)
		{
			putchar((9 % 10) + '0');
			putchar((9 % 10) + '0');

			if (8 == 8 && 9 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
