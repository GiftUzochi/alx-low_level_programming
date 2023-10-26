#include "main.h"

/**
 * print_binary - fxn for binary representation of num
 * @n: the first number
 * Return: NULL
 */

void print_binary(unsigned long int n)
	int i, flag = 0;
	unsigned long int custom_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int custom_base = sizeof(unsigned long int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < custom_base; i++)
	{
		if ((n & custom_mask) || flag)
		{
			if (n & custom_mask)
				_putchar('1');
			else
				_putchar('0');
			flag = 1;
		}
		custom_mask >>= 1;
	}
}
