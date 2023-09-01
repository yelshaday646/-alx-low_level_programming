#include "main.h"

/**
 * flip_bits -  returns the no bit you need to flip to get from on to another.
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: no_of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, integer_count = 0;
	unsigned long int exclusive_shifted_bit;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		exclusive_shifted_bit = exclusive >> x;
		if (exclusive_shifted_bit & 1)
			integer_count++;
	}

	return (integer_count);
}
