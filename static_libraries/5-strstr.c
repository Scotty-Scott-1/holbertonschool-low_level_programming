#include "main.h"
/**
* _strstr - find first occurance of substring
* @haystack: pointer to a string
* @needle: pointer to a string
* Description: a fuction
*
* Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = '\0';
	char *in = needle;
	char *ihay = haystack;

		while (*haystack != '\0')
	{
		in = needle;
		ihay = haystack;

		while (*in != '\0' && *ihay == *in)
	{
		ihay++;
		in++;
	}

		if (*in == '\0')
	{
		result = haystack;
		break;
	}
		haystack++;
	}
		return (result);
}
