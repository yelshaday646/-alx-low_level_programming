#include <stdio.h>
/**
 * main - Prints numbers from 0 and 9.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int i;

        for (i = 48; i < 58; i++)
        {
                putchar(i);
        }
        putchar('\n');
        return (0);
}
