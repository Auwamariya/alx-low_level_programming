#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds;
int tens;
int ones;

for (hundreds = 0; hundreds <= 9; hundreds++)
{
for (tens = hundreds + 1 ; tens <= 9; tens++)
{
for (ones = hundreds + 2; ones <= 9; ones++)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(ones + '0');

if (hundreds < 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
