#include "main.h"
/**
 * _islower - identify low case
 * @c :is a smamm letter from a to z
 * Return: 1 if small else 0
 */
int _islower(int c)
{	
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
