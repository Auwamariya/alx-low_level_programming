#include "main.h"

#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: Always 0.
 */

int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
{
_putchar("%c: %d\n", c, _isupper(c))
}
return (1);
else
{
return (0);
}
}
