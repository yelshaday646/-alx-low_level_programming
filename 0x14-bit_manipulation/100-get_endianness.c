#include "main.h"

/**
 * get_endianness -a function that checks the endianness.
 * Return: 1 for little, 0 for big
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
