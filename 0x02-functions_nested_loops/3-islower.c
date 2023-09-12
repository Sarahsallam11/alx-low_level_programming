#include "main.h"

/**
 * _is lower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if the char is lowcase, otherwise 0
 */

int _is lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
