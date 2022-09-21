#include "main.h"

/**
 * print_alphabet - check the code for function that prints the alphabet in lowercase.
 * Description: Prints the alphabet with _putchar
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
