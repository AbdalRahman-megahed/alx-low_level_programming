#include "main.h"
#include <stdio.h>
/** this program prints the name of itself
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	return;
}
