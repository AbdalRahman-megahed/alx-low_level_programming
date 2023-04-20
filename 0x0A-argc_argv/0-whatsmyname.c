#include "main.h"
/**
 * main - prints the program name.
 * @argc: int.
 * @argv: list.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *p = argv[argc - 1];

	_putchar(*p);
	_putchar('\n');
	return (0);
}
