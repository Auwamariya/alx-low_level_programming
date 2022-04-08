#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
