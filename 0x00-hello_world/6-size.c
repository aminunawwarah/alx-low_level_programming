#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf("Size of a char: %1d bytes\n", sizeof(c));
	printf("Size of an int: %1d bytes\n", sizeof(i));
	printf("Size of a long: %1d bytes\n", sizeof(li));
	printf("Size of a long long: %1d bytes\n", sizeof(lli));
	printf("Size of a float: %1d bytes \n", sizeof(f));
	return (0);
}
