#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - fxn that prints each element of an array
 * @array: array
 * @size: numbers to print
 * @action: pointer to print in regular
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array == NULL || action == NULL)
		return;

	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}
