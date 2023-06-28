/**
* _strncat - concat str 1 to str nat most n times
* @dest: a char
* @src: a char
* @n: an int
*
* Description: a function
*
* Return: char
*
*/
char *_strncat(char *dest, char *src, int n)
{
	char *destcopy = 0;

	destcopy = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	dest = '\0';

	return (destcopy);
}














