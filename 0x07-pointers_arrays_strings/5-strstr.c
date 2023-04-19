#include "main.h"
/**
 * _strstr - matching words.
 * @needle: the word to be matched.
 * @haystack: the statement to be scanned.
 * Returns: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char some_checker;
	while (*needle)
	{
		if (*haystack == *needle)
		{
			some_checker = 1;
			needle++;
		}
		else
		{
			some_checker = NULL;
		}
		haystack++;
	}
	return (some_checker);
}
