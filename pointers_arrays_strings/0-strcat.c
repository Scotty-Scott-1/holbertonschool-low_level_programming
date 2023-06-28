/**
* _strcat - concat two strings. overwrite null value
* @dest: destination
* @src: source
* Description - a function
*
* Return: char
**/
char *_strcat(char *dest, char *src)
{
	int srclen = 0;
	int destlen = 0;
	int i;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}

	while (src[srclen] != '\0')
	{
		srclen++;
	}

	for (i = 0; i <= srclen && src[i] != '\0'; i++)
	{
		dest[i + destlen] = src[i];
	}

	dest[i + destlen] = '\0';

	return (dest);
}
