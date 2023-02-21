#include <stdio.h>	/* printf */
#include <string.h>	/* strlen, strcpy */

/**
 * reverse_string - function that reverses the order of a string
 *
 * Description:
 * This function takes a string and reverses the order of its characters
 * in place and returns the reversed string.
 *
 * @str: the string to be reversed
 * Return: pointer to the reversed string
*/
char *reverse_string(char *str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	char temp;

	while (right > left)
	{
		temp = *right;
		*right = *left;
		*left = temp;
		right--;
		left++;
	}
	return (str);
}

/**
 * add_strings - adds two strings and returns the result
 *
 * Description:
 * This function takes two strings and adds them together. The function returns
 * the result of the addition.
 *
 * @sum: pointer to the string where the result will be stored
 * @num1: the first string to be added
 * @num2: the second string to be added
 *
 * Return: pointer to the string containing the result
*/
char *add_strings(char *sum, const char *num1, const char *num2)
{
	const char *ptr1 = num1 + strlen(num1) - 1;
	const char *ptr2 = num2 + strlen(num2) - 1;
	char *ptr_sum = sum;
	int carry = 0;
	int digit_sum;

	while (ptr1 >= num1 || ptr2 >= num2 || carry)
	{
		digit_sum = carry;
		if (ptr1 >= num1)
			digit_sum += *(ptr1--) - '0';
		if (ptr2 >= num2)
			digit_sum += *(ptr2--) - '0';
		*ptr_sum++ = digit_sum % 10 + '0';
		carry = digit_sum / 10;
	}
	*ptr_sum = '\0';
	return (reverse_string(sum));
}

/**
 * main - prints the first 98 Fibonacci numbers, starting with 0 and 1
 *
 * Return: 0 (success)
*/
int main(void)
{
	char fib[3][300];
	int i;

	strcpy(fib[0], "0");
	strcpy(fib[1], "1");

	for (i = 2; i < 100; i++)
	{
		printf("%s%s", add_strings(fib[2], fib[1], fib[0]), (i != 99) ? ", " : "\n");
		strcpy(fib[0], fib[1]);
		strcpy(fib[1], fib[2]);
	}

	return (0);
}
