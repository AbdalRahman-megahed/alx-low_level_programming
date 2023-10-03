#include <stdio.h>
#include "main.h"
/**
 * main - prints the program number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
  printf("%d", argc);
  return (0);
}
