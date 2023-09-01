#include "main.h"

/**
 * clear_bit - puts value of bit to 0 at a given index.
 * @n: pointes to the bit index to change
 * @index: index_bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 127)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
