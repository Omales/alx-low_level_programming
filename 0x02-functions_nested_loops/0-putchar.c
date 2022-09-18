#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * main- this function prints a char
 * Description: this funtion from main
 * it prints a character
 * Return: 0
 */
int main(void)
{
	char _putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'}
	int c;

	for (c = 0; c < sizeof(_putchar); c++)
	{
		putchar(_putchar[c]);
	}

	putchar('\n');
	return (0);
}
