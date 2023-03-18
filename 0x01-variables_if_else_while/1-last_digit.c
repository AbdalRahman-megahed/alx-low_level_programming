#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
  /*main*/
int n;
int x;
x = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (x > 5)
{
  printf("Last digit of %i is and %i is greater than 5\n", n, x);
}
else if (x == 0)
{
  printf("Last digit of %i is %i and is 0", n, x);
}
else
{
  printf("Last digit of %i is %i and is less than 6 and not 0", n, x);
}
return (0);
}
