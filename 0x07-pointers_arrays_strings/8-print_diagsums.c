#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print/s the/ sum/ of/ the/ two/
 * diagonals/ of/ a square/ matrix/ of/ integers/
 * @a: input pointer/.
 * @size: size/ of/ the/ matrix/
 * Return: no return/.
 */
void print_diagsums(int *a, int size)
{
	int I, Sum1 = 0, Sum2 = 0;

	for (I = 0; I < (size * size); I++)
	{
		if (I % (size + 1) == 0)
			Sum1 += *(a + I);
		if (I % (size - 1) == 0 && I != 0 && I < size * size - 1)
			Sum2 += *(a + I);
	}
	printf("%d, %d\n", Sum1, Sum2);
}
