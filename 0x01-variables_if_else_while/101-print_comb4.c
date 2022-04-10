#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int hundreds;
int tens;
int ones;
for (i = 0; i < 1000; i++)
{
hundreds = i / 100;
tens = (i / 10) % 10;
ones = i % 10;

if (hundreds < tens && tens < ones)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(ones + '0');

if (i < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
