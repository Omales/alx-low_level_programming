#include "main.h"
#include <stdio.h>
#include "print_alphabet.h"
#include "other_header.h"
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
/**
 * main- prints alpahbets
 * Description: this function prints alphabets a-z
 * this function prints from a-z
 * Return: 0
 */
int main(void)
{
	void print_alphabet_x10(void);
	return (0);

}
