#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
void puts_half(char *str)
{
	int len = 0;
	
while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar('\n');
	}
