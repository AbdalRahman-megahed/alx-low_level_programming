#include <stdio.h>
/**
* main - prints the program name.
* @argc: int.
* @argv: list.
* Return: 0.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
