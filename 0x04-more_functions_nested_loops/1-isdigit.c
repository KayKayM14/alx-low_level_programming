#include "main.h"

/**
 *  _isdigit - checks for a digit (0 through 9)
 *  @c: checks c is a digit
 *  Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

