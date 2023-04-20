#include <stdio.h>
/**
* main - prints the program name.
* @argc: int.
* @argv: list.
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
