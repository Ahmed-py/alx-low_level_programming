#include "main.h"
/**
 * _memcpy - function that make Copies for Memory Area,
 * @dest: Dest memory area.
 * @src: Source Memory Area.
 * @n: Bytes Filled.
 * Return: The Pointer to Dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
