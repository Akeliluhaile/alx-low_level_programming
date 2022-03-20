#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @ld:last digit of intiger
 * @c:intiger
 * Return:always 0
 */
int print_last_digit(int c, int ld)
{
	ld = c % 10

	_putchar(ld + '0');
	return (ld);
}
