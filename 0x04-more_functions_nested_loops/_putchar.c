#include <unistd.h>
/**
 * _putchar - write the character c to stdout.
 * @c: The character to print.
 *
 * On error, -1 is returned, and error is set appropritely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
