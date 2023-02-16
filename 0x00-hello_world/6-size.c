#include <stdio.h>
/**
* main - A program that prints the size of various types on the computer types
* Return 0 (success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
