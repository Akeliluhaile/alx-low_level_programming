#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int*p = &s[i];

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (p);
	}
	return (0);
}
