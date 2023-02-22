#include "main.h"

/**
 * _isalpha - return 1 if c is capital or small
 * @c: is the variable that will be used as an argument o the function
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
