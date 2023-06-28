/**
* _strncpy - copy n chats to dest. if shorter add null values
* @dest: the destination
* @src: the source
* @n: amount of chars copied
* Description: a function
*
* Return: int
*
*/
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i <= n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i <= n)
	{

		i++;
		dest[i] = '\0';
	}

	return (dest);
}













