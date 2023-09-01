#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c to stdout
 * @c: char 
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
