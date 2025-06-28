/* Program to count blanks, tabs, and newlines. */
/* What if the characters in the input exceeds the size of bytes int can hold? */

#include <stdio.h>

int main (void)
{
	int c;
	int nb, nt, nn;	/* Counter for blanks, tabs and newline char */
	nb = nt = nn = c = 0;

	while ((c = getchar()) != EOF)
	{
	if ( c == ' ')
		++nb;
	else if (c == '\t')
		++nt;
	else if (c == '\n')
		++nn;
	}
	printf("There are %d blanks in the input.\n", nb);
	printf("There are %d tabs in the input.\n", nt);
	printf("There are %d lines in the input.\n", nn);
	return 0;
}
