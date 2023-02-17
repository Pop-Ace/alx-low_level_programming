#include <stdio.h>

/**
 * main - Entry point
 * Description - lowercase alphabet in reverse
 * Return: 0(success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a' ; i--)
	{
	putchar(i);
	}

	putchar('\n');

return (0);
}

