#include "main.h"
/**
 * printf_s - print a string
 * @s: string to be printed
 * Return: string
 */
void printf_s(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(*s);
		i++;
	}
}
