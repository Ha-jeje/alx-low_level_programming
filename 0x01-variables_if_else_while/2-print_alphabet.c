#include <stdio.h>
/**
 * main -Entry point
 * Print the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
