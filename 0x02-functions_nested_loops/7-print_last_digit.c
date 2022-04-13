#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @ld:last digit of intiger
 * @c:intiger
 * Return:value of last digit of a number
 */
int print_last_digit(int c)
{

	ld = c % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}

	_putchar(ld + '0')
}
