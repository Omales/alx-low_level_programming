#include <stdio.h>
/**
 * main- printing numbers from 01-99 with commas
 * Description: using the main function
 * this program prints numbers from 01-99
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 89; d <= 99; d++)
	{
		putchar(d);
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
