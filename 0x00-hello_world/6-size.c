#include <stdio.h>

/**
* main - print the string of the function
*
* Return: 0 if (Successful)
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %1u byte(s)\n" sizeof(c));
	printf("Size of a int: %1u byte(s)\n" sizeof(i));
	printf("Size of a long int: %1u byte(s)\n" sizeof(li));
	printf("Size of a long long int: %1u byte(s)\n" sizeof(lli));
	printf("Size of a float: %1u byte(s)\n" sizeof(f));
	return (0);
}
