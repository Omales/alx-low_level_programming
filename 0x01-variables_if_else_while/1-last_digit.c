#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program assign a number to the variable n each time when
 * Description: using main function
 * this program prints less than or equal to zero
 * Return: 0
 */

int main(void)

{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n  % 10;

	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and isless than 6 and not 0\n", n, l);
	}
	return (0);
}
