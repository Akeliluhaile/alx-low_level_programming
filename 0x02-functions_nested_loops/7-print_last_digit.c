#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @ld:last digit of intiger
 * @c:intige
 * int: an intiger data type
 * Return:always 0
 */
int print_last_digit(int)
{
	int c, ld;

	ld = c % 10;

	_putchar(ld + '0');
	return (ld);
}
