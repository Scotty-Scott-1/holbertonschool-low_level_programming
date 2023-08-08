#include "main.h"
/**
* main - copy contents of one file to another file
* Description: Usage: cp file_from file_to
* @argc: number of command line args
* @argv: array of command line args
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int fileDesc_1, fileDesc_2, readchars = 1024, output = 0;
	char *buffer = NULL;
	mode_t mask = umask(0);

	if (argc != 3)
	{	write(2, "Usage: cp file_from file_to\n", 28);
		exit(97); }
	if (!argv[1])
	{	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fileDesc_1 = open(argv[1], O_RDONLY);
	if (fileDesc_1 == -1)
	return (-1);
	fileDesc_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileDesc_2 == -1)
	{	dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	umask(mask);
	buffer = (char *)malloc(1024);
	if (buffer == NULL)
		buffer = "";
	while (readchars > 0)
	{	readchars = read(fileDesc_1, buffer, 1024);
		if (readchars == -1)
		{	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		output = write(fileDesc_2, buffer, readchars);
		if (output == -1)
		{	dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (close(fileDesc_1) == -1)
	{	dprintf(2, "Error: Can't close fd fileDesc_1\n");
		exit(100); }
	if (close(fileDesc_2) == -1)
	{	dprintf(2, "Error: Can't close fd fileDesc_2\n");
		exit(100);
	}
	free(buffer);
	return (0);
}
