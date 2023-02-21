#include "main.h"

/**
 * print_alphabet_x10 - print small alphabets a-z 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int num;
	char a;

	for (num = 0; num <= 9; num++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
