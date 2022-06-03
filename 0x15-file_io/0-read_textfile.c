#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rede_text - that a text file and prints
 * @filename: variable pointers
 * @letters: size letter
 * description: write a funtion tha reads and print
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and prints
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t file, let, w;
	char *text;
	text = malloc(letter);
	
	if (text == NULL)
		 return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	
	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letter);
	w = write(STDOUT_FILENO, text, let);
	
	close(file);
	return (w);
}
