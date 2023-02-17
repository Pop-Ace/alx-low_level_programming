#include <stdio.h>

/**
 * main - Entry point
 * Description - Output  Combinations of two digit
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 0; i <= 8; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			putchar('0' + i);
			putchar('0' + k);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
