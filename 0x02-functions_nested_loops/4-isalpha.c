#include "main.h"
11;rgb:0000/0000/0000/**
* _isalpha - checks for alphabetic character
* @c: the character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
