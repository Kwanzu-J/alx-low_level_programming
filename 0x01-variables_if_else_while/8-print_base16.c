#include <stdio.h>

/**
 * main - a program printing heexadecimals using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		putchar(i);
		if (i == 57)
			i += 39;
	}
	putchar('\n');
	return (0);
}
