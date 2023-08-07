#include "main.h"
/**
* create_file - create a file and write text to it
* Description: if filename or content null return -1.
* if buffer fails -1. if desciptor error -1.
* if write fails -1. if test arg blank write empty file.
* if file exists trunc. set permissions to rw.
* @filename: name of file
* @text_content: content of file
* Return: 1 for success. -1 for failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fileDesc, i = 0, j = 0;
	int output = 0;
	char *buffer = NULL;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileDesc == -1)
		return (-1);

	buffer = (char *) malloc(sizeof(char) * i);
	if (buffer == NULL)
	{
		close(fileDesc);
		return (-1);
	}

	while (j < i)
	{
		buffer[j] = text_content[j];
		j++;
	}
	/*buffer[i] = '\0';*/
	output = write(fileDesc, buffer, i);
	if (output == -1)
	{
		close(fileDesc);
		free(buffer);
		return (-1);
	}
	close(fileDesc);
	free(buffer);
	return (1);
}
