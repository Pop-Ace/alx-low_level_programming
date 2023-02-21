#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;
	unsigned long prev = 1, curr = 1, next;

	for (i = 0; i < 50; i++)
	{
		printf("%lu%s", curr, i == 49 ? "\n" : ", ");
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	return (0);
}
