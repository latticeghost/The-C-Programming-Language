/* Program to print the length of the input, which is arbitrary.
Assumption: The maximum length of the input is 9 * 10^18 characters */

#include <stdio.h>

long int line_length(void);	/*Function to return the length of the input.*/

int main(void)
{
	printf("\nThe length of the input is: %lu characters.\n", line_length());
	return 0;
}

long int line_length(void)
{
	char c;
	long int length = 0;
	while ((c = getchar()) != EOF)
	{
		++length;
	}
	return length;
}
