#include <stdio.h>
#include <stdlib.h>

/**
 * error - prints error message and exits
 *
 * @err: error code
 */
void error(int err)
{
	printf("Error\n");
	exit(err);
}

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n;

	/* check for correct number of arguments */
	if (argc != 2)
		error(1);

	/* get number of bytes to print */
	n = atoi(argv[1]);
	if (n < 0)
		error(2);

	/* print opcodes */
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
