#include "main.h"

/**
 * _strpbrk - Searchs a strings for a sets of byte.
 * * @s: First strings.
 * @accept: Second string/s/.
 * Return: a pointer/s/ to the byte/s/ In S That Mtches One Of The
 * byte/s/ in Accept, or nULL If No Such byte/-/ Is found/s/.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
}
