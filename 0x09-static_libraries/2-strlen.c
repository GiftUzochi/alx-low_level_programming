#include "main.h"
/**
 * _strlen - function that returns length of string
 * @s: string to be counted
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != 0)
	{
		len++;
	}

	return (len);
}
