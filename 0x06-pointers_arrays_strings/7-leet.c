#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *leet(char *str)
{
	int index1 = 0, index2;
	char lee[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
			if (str[index1] == lee[index2] ||
					str[index1] - 32 == lee[index2])
				str[index1] = index2 + '0';
		index1++;
	}
	return (str);
}
