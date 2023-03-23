#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
/*#include "main.h"*/

/**
 * print_line - print a line
 * @n: length of line
 * Return: nothing
 **/

/**
 * void print_line(int n)
*{
*	while (n >= 1)
*	{
*		_putchar('_');
*		n--;
*	}
*	_putchar('\n');
*}
**/
