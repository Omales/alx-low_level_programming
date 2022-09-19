#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * main- this function prints a-z in lowercase
 * Description: this funtion from main
 * it prints a-z in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
