#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second sting to be compared
 * Return: If str1 < str2, the negative difference of the first unmatched char
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
		i++;
	if (s1 == s2)
		i = 0;
	return (s1[i] - s2[i]);
}
