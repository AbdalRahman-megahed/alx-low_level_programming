#include "main.h"
/** this program prints the name of itself
 */
int main(int argc, char *argv[])
{
	char *p = argv[argc - 1];

	_putchar(*p);
	_putchar('\n');
	return 0;
}
