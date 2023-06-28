/**
* _atoi - print atoi
*
* @s: a string
* Description: a function
*
* Return: int
*/
int _atoi(char *s)
{
	int sum = 0;
	int i = 0;

	while (s[i] != '\0')
	{

	if (s[i] == '-')
	{sum - 1; }
	else if (s[i] != '-')
	{sum = sum * 10 + (s[i] - '0'); }
	else if (s[i] < 48 || s[i] > 57)
	{return (0); }
	i++;
}

return (sum);
}
