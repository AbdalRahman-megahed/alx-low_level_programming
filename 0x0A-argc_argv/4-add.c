#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - prints the program name.
* @argc: int.
* @argv: list.
* Return: 0.
*/
int main(int argc, char *argv[])
{
  int n = 1;
  if (argc == 1)
    {
      printf("%d", 0);
    }
  else
    {
      int s = 0;
      while (n < argc)
	{
	  if (!isdigit(argv[n]))
	    {
	      printf("%s\n", "Error");
	      return (1);
	    }
	  else
	    {
	      s = s + atoi(argv[n]);
	      n++;
	    }
	}
      printf("%d", s);
    }
  return (0);
}
