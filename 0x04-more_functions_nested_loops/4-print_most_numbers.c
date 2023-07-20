#include "main.h"

/**
 * print_most_number -prints 01234567899
 * Return:void
 */

void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	if (!(c == '2' || c == '4'))
		_putchar(c);
}
_putchar('\n');
}
