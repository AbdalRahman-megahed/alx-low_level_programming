#include "main.h"
#include <stddef.h>
/**
 * _strstr - matching words.
 * @needle: the word to be matched.
 * @haystack: the statement to be scanned.
 * Returns: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int signal;
	char *p = needle;
	while (*needle)
	{
		if (*haystack == *needle)
		{
			needle++;
			signal = 1;
		}
		else
		{
			signal = 0;
		}
		haystack++;
	}
	if (signal == 1)
	{
		*needle = *p;
		return (needle);
	}
	return (NULL);
}
