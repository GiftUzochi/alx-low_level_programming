#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always 0
 */
int main(void)
{
char i;

for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
