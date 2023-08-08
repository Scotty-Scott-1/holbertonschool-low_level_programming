#include "main.h"
/**
* cp_file - copy contents of one file to another file
* Description: Usage: cp file_from file_to
* @argc: number of command line args
* @argv: array of command line args
* return: 0 for success
*/
int main(int argc, char *argv[])
{
	int fileDesc_1;
	int fileDesc_2;
	char *buffer = NULL;
	int readchars = 1024;
	int output = 0;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	if(argv[1] == NULL)
	{
		dprintf(2,"Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fileDesc_1 = open(argv[1], O_RDONLY);
	if(fileDesc_1 == -1)
	{
		return (-1);
	}

	fileDesc_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);
	if(fileDesc_2 == -1)
	{
		dprintf(2,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buffer = (char *)malloc(1024);
	if (buffer == NULL)
	{
		buffer = "";
	}

	while (readchars > 0)
	{
		readchars = read(fileDesc_1, buffer, 1024);

		if (readchars == -1)
		{
			dprintf(2,"Can't read from file %s", argv[1]);
			exit(98);
		}

		output = write(fileDesc_2, buffer, readchars);
		if (output == -1)
		{
			dprintf(2,"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close(fileDesc_1);

	if(fileDesc_1 == -1)
	{
		dprintf(2,"Error: Can't close fd fileDesc_1\n");
		exit(100);
	}
	close(fileDesc_2);
		if(fileDesc_2 == -1)
	{
		dprintf(2,"Error: Can't close fd fileDesc_2\n");
		exit(100);
	}
	free(buffer);
	return (0);

}
