#include "main.h"
/**
 *print_most_numbers - Prints the numbers from 0-9 except for 2 and 4
 *Return: returns nothing
 */
void print_most_numbers(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
_putchar(i);
}
_putchar('\n');
}

