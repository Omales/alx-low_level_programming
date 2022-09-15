#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: this  program that prints the alphabet in lowercase
 * Description: using the main function
 *  program that prints the alphabet in lowercase
 *  Return 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++);
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
