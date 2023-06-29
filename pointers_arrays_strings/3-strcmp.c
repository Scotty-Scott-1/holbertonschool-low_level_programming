/**
* _ strcmp - compare two strings
* @s1: a string
* @s2: a string
*
* Description: a function
*
* Return: int
*/
int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int result = 0;

while (s1[i] && s2[i] != '\0')
{
	if (s1[i] != s2[i])
	{

		return (result =  s1[i] - s2[i]);
	}
	i++;
}
return (result);
}




