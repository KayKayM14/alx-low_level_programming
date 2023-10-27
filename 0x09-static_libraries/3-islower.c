#include "main.h"

/**
 * _islower - Check if characters is lowercase
 * @c: The characters to be checked
 * Return: 1 for lowercase or 0 for anything else
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
