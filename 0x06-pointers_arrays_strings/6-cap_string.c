#include "main.h"
/**
 * cap_string: a function that capitalizes all words of a string.
 * @a: the string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] == ' ' 
|| a[i] == '\t' 
|| a[i] == '\n' 
|| a[i] == ',' 
|| a[i] == ';' 
|| a[i] == '.' 
|| a[i] == '!' 
|| a[i] == '?' 
|| a[i] == '"' 
|| a[i] == '(' 
|| a[i] == ')' 
|| a[i] == '{' 
|| a[i] == '}' 
|| i == 0)
		{
			i++;
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= 32;
		}
		else
			i++;
	}
	return (a);
}
