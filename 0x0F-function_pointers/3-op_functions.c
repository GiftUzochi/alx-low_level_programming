#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - to returns the sum of two numbers
 * @a: the first input
 * @b: second input
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to returns the diff of two num
 * @a: first input
 * @b: second input
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - to returns two product
 * @a: input
 * @b: input
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division
 * @a: input
 * @b: input
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - to returns two modulus
 * @a: input
 * @b: input
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
