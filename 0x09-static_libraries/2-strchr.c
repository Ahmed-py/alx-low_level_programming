#include "main.h"
/**
 * _strchr - Locate a Characters in a Strings,
 * @s: Strings.
 * @c: Characters.
 * Return: the pointers to the first occure of the characters C.
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	for (; *(s + x) != '\0'; x++)
		if (*(s + x) == c)
			return (s + x);
	if (*(s + x) == c)
		return (s + x);
	return ('\0');
}
