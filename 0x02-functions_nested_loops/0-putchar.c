#include "main.h"

/**
 *  0-putchar.c- this function prints a char
 * Description: this funtion from main
 * it prints a character
 * Return: 0
 */
int main(void)
{
	char _putchar[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int c;

	for (c = 0; c < 8; c++)
	{
		putchar(_putchar[c]);
	}

	putchar('\n');
	return (0);
}
