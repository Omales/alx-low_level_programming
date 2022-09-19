#include "main.h"
#include <stdio.h>
/**
 * main- this function prints alphabets
 * Description: this function print a-z
 * this function prints a-z
 * Return: 0
 */

void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * print_alphabet_x10 - function to print abc 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
	putchar('\n');
	}

}

