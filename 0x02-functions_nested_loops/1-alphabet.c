#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char la;

	la = 'a';

	while (la <= 'z')
	{
		_putchar(la);
		la++;
	}
	_putchar('\n');
}
