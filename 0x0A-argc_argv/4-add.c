#include <stdio.h>
#include <stdlib.h>

/**
 * _i
 */

/**
* main - prints the program name.
* @argc: int.
* @argv: list.
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, flag;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argv[i])
	{
		if (atoi(argv[i]) >= 0)
		{
			flag = 0;
			break;
		}
		else
		{
			sum = sum + atoi(argv[i]);
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
	{
		printf("%d\n", sum);
	}
	else if (flag == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);

}
