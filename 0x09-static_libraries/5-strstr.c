#include "main.h"

/**
 * _strstr - it's Find The First OCCurrence Of The Substring/s/.
 * needle/s/ In The Sring haystack/s/.
 * @haystack: Entire STring.
 * @needle: SUBstring.
 * Return: POinter To The Bginning Of LOcated SUBbstring or
 * NULL// if the SUBstring Is Not Found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *b_haystack;
	char *p_needle;

	while (*haystack != '\0')
	{
		b_haystack = haystack;
		p_needle = needle;

		while (*haystack != '\0' && *p_needle != '\0' && *haystack == *p_needle)
		{
			haystack++;
			p_needle++;
		}
		if (!*p_needle)
			return (b_haystack);
		haystack = b_haystack + 1;
	}
	return (0);
}
