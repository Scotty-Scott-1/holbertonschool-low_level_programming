#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
* read_textfile - read a file and write to stout
* Description: read and write n amount of letters
* @filename: pointer to file
* @letters: amount of letters read and written
* Return: the amount of chars written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileDesc;
	ssize_t fileR;
	ssize_t fileW;
	char *buffer = NULL;


	if (filename == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);

	if (fileDesc == -1)
		return (0);

	buffer = (char *)malloc((sizeof(char) * letters) + 1);

	if (buffer == NULL)
	{
		close(fileDesc);
		return (0);
	}

	fileR = read(fileDesc, buffer, letters);
	close(fileDesc);

	if (fileR == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[fileR] = '\0';
	fileW = write(STDOUT_FILENO, buffer, fileR);
	free(buffer);

	if (fileW != fileR || fileW == -1)
	{
		return (0);
	}
	return (fileR);
}
