#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed
 * by src
 * @dest: copy
 * @src: copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}

for (; x < l; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';

return (dest);
}
