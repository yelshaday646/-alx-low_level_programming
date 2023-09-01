#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input_no
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value_atindex;

	if (index > 127)
		return (-1);

	bit_value_atindex = (n >> index) & 1;

	return (bit_value_atindex);
}
