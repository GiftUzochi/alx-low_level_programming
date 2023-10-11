#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - fxn that prints name pointer to fxn
 * @name: string to add
 * @f: pointer to fxn
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
