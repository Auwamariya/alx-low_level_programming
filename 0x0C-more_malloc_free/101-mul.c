#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>


int _putchar(char c);
int _strlen(char *str);
char *create_array(int size);
char *_start_digit(char *str);
void mul_digit(char *prod, char *mult, int digit, int zeroes);
void add_digits(char *final_prod, char *next_prod, int next_len);


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}

/**
 * create_array - Array of chars and initialized with x
 * @size: The size of the array to be initialized.
 * Return: A pointer to the array.
 */
char *create_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * _start_digit - Iterates through a string of numbers containing leading zeroes until a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *_start_digit(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * is_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int is_digit(char c)
{
	int num = c - '0';

	if (num < 0 || num > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (num);
}

/**
 * mul_digit - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 */
void mul_digit(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = _strlen(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_digits - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void add_digits(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = _start_digit(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = _start_digit(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = _strlen(argv[1]) + _strlen(argv[2]);
	final_prod = create_array(size + 1);
	next_prod = create_array(size + 1);

	for (index = _strlen(argv[2]) - 1; index >= 0; index--)
	{
		digit = is_digit(*(argv[2] + index));
		mul_digit(next_prod, argv[1], digit, zeroes++);
		add_digits(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			_putchar(final_prod[index]);
	}
	_putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
