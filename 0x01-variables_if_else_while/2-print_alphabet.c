#include <stdio.h>

/**
 * main - write a program that prints the alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
