#include "main.h"
/**
 * print_alphabet- this function prints abc
 * Description: this funtion from main
 * it prints a-z in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
}

