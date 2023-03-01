#include "main.h"
#include <string.h>

/**
 * reverse - reverses a string
 * @s: string to reverse
 * Return: pointer to the reversed string
 */
char *reverse(char *s)
{
	size_t len = strlen(s);
	size_t i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	return (s);
}

/**
 * infinite_add - adds two numbers
 * @n1: The first positive number
 * @n2: The second positive number
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j, k, sum, carry = 0;

	/* if the result buffer is too small, return 0 */
	if (len1 > size_r || len2 > size_r)
		return (0);

	/* Perform addition */
	for (i = len1 - 1, j = len2 - 1, k = 0;
		i >= 0 || j >= 0 || carry;
		i--, j--, k++)
	{
		sum = carry;
		sum += (i >= 0) ? n1[i] - '0' : 0;
		sum += (j >= 0) ? n2[j] - '0' : 0;
		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	/* if the result is empty, return 0 */
	if (k == 0)
		return (0);

	/* null terminate the result */
	r[k] = '\0';

	/* return the reversed result */
	return (reverse(r));
}
