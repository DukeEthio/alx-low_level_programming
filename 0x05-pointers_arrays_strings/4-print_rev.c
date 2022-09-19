#include "main.h"
/**
 * print_rev - print a string is reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++] != '\0')
		len++;
	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
