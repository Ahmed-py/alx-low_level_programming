#include "main.h"
/**
 * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b,
 * @s : the memory area s.
 * @b: constant byte.
 * @n : bytes filled.
 * Return : the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned x;
	
	for(x=0; x<n; x++)
		*(s+x)=b;

	return (s);
}	
