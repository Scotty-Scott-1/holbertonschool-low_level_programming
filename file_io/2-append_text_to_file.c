#include "main.h"
/**
* append_text_to_file - append text to the end of a file
* Description: where filename should be the name of the file
* and text_content is the string to append
*
* if text_content is null dont add anything **DONE**
* don't create file if does not exist **DONE**
* reutrn 1 if the file exists **DONE**
* reutrn -1 if the file does not exist **DONE**
* return -1 if I don't have permission to write **DONE**
* if filemane null return -1 **DONE**
*
* @filename: name of file
* @text_content: content of file. Already null terminated
*
* Return: 1 for success. -1 for failure.
*/


int append_text_to_file(const char *filename, char *text_content)
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

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
		return (-1);

	buffer = (char *) malloc(sizeof(char) * i);
	if (buffer == NULL)
	{
		close(fileDesc);
		if (filename != NULL)
		return (1);
		else
		return (-1);
	}
	while (j < i)
	{
		buffer[j] = text_content[j];
		j++;
	}
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
