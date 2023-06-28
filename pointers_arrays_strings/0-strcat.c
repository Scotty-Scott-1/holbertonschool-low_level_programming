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
while(*dest != '\0')
{destlen++;}

while (*src != '\0')
{srclen++;}

for(i = 0; i < srclen;i++ )
{dest[i] = src[i];}


return (dest);
}
