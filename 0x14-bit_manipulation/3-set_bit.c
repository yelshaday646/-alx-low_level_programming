#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointes the the index number to change
 * @index: index to set 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 127)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
