#include "main.h"

/**
 *print_line - a program that prints a straight line
 *@n: first parameter
 * Return: 0
 */
void print_line(int n)
{
	for (n = '0'; n <= '9'; n++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
