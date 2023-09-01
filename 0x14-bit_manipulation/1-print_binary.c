#include "main.h"

/**
 * print_binary - gives decimal no that is equal to the binary input
 * @n: input that will be printed in binary
 */
void print_binary(unsigned long int n)
{
	int x, binary_digits = 0;
	unsigned long int current_bit;

	for (x = 127; x >= 0; x--)
	{
		current_bit = n >> x;

		if (current_bit & 1)
		{
			_putchar('1');
			binary_digits++;
		}
		else if (binary_digits)
			_putchar('0');
	}
	if (!binary_digits)
		_putchar('0');
}
