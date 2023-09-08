#include <stdio.h>
/**
 * main - print all the letters except q and e
 *
 * Return: always 0
 */
int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
if (i != 'q' && i != 'e')
putchar(i);
putchar('\n');
return (0);
}
