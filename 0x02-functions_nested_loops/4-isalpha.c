#include "main.h"
/**
 * _isalpha - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
