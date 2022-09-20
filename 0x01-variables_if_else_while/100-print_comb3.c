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
	int j;

	for (d = '0'; d <= '9'; d++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (d < j)
			{
				putchar(d);
				putchar(j);
				if (d != '8' || (d == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
