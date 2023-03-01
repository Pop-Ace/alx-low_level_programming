#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
static int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 * Return: pointer to string s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
		_islower(s[i]) ? s[i] -= 32 : s[i];

	return (s);
}
