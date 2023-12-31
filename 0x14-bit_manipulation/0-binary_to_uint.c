#include "main.h"

/**
 * binary_to_uint - convert binary to number of unsigned int
 * @b: pointing to the string of the unsigned int
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	unsigned int i, len, power;
	char n;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0, power = len - 1; i < len; i++, power--)
	{
		n = b[i];

		if (n != '0' && n != '1')
			return (0);

		conv_num = (n - '0') * (1 << power);
	}

	return (conv_num);
}
