#include <stdlib.h>
#include <time.h>
/**
 * main- it compare  last digit of no n with argument given
 * Return:Always sucess
 */
int main(void)
{
	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2

	ld = n % 10

	if (ld > 5)
	{
		printf("Last digit of" n "is" ld "and is greater than 5\n");
	}
	else if (ld == 0)
	{
		printf("Last digit of" n "is" ld  "and is 0\n");
	}
	else
	{
		printf("Last digit of" n "is" ld  "and is less than 6 and not 0\n");

	return (0);

}
