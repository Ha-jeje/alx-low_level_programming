#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
