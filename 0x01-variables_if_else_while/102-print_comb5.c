#include <stdio.h>
/**
 * main -printing numbers from 100-999
 * Description: using the main function
 * this program prints ramdom numbers of 3
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 101; c <= 999; c++)
	{
		putchar(c);
		if (c != 999)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

