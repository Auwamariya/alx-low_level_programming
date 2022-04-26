#include "main.h"
#include <stdio.h>

/* a function that fills memory with a constant byte.
 *
 * Return s
 */

char *_memset(char *s, char b, unsigned int n);

{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (s);
}
