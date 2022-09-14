#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Get a ramdom number and print the number
 * and if it positive, negative, or zero
 * Return: 0
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/** your code goes there */
				if (n > 0)
					printf("%d the number is greater than 0: is positive\n", n);
				else if (n < 0)
					printf("%d the number is 0: is zero\n", n);
				else
					printf("%d the number is less than 0: is negative\n", n);

					return (0);

}
