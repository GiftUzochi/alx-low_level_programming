#include "hash_tables.h"

/**
 * key_index - fxn that gives you the index of a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return: index at which the value pair should be stored in the array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
