/* Program that prints its input one word per line */

#include <stdio.h>
#define IN 1	/* This will indicate we are inside a word */
#define OUT 0	/* This will indicate we are outside a word */

int main (void)
{
	int c, state;
	state = OUT;	/* Initially we are outside of a word */

	while ((c = getchar()) != EOF) {
		/* Words will be separated by a blank or a tab or start on a newline */
		if (c != ' ' && c != '\t' && c != '\n') {
			putchar(c);
			state = IN;
		/* Go to the next line if we encounter a blank or a tab or a newline,
		& do not print empty lines if a series of blanks or tabs are present */
		} else if ((c == ' ' || c == '\t' || c == '\n') && state == IN) {
			putchar('\n');
			state = OUT;
		}
	}
	return 0;
}
