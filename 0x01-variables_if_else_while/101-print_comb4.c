# include <stdio.h>
/**
 * main - printing numbers
 * Description: using the main function
 * this program prints from 101, 102, -990
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 57; s <= 100; s++)
	{
		putchar(s);
		if (s != 100)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);


}
