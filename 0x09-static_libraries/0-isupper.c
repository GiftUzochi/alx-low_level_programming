#include "main.h"

/**
 * _isupper - function that checks for uppercase
 * @c: Variable char text
 * Return: 0 successful or 1.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
