#include "main.h"
/**
 * _memset - Fills Memory with a Constant Byte,
 * @s: Memory Area.
 * @b: Constant Byte.
 * @n: Bytes Filled.
 * Return: The Pointer to Dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) =  b;

	return (s);
}
