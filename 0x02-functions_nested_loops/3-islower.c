#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @lowercase_character: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int lowercase_character)
{
	if (lowercase_character >= 97 && lowercase_character <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
