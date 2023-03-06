#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return ((char *)s);
}
