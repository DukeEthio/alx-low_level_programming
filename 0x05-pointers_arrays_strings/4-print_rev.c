#include "main.h"
/**
 * print_rev - print a string is reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int index;

	index = 0;
	while (s[index++] != '\0')
		index++;
	for (index = index - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
