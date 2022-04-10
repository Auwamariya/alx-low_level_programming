#include <stdio.h>

/**
 * main - entry point
 * description: prints all possible different combinations of two digits
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Numbers must be separated by ,, followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens;
int ones;

for (tens = 0; tens <= 9; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(tens + '0');
putchar(ones + '0');
if (tens < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
