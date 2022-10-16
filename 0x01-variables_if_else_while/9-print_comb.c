#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 48; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
