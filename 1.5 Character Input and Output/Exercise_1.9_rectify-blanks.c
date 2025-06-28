/* Program to copy its input to its output, replacing each string of one or more
blanks by a single blank */

/* Notice after running the program, when you input & hit 'Enter' key the output is displayed
instantly below the input, where as in the program there is no specific instruction to display
the output as such when we detect the newline char. Can you guess why ? */

#include <stdio.h>
#define IN 1
#define OUT 0

int
main(void)	/* This is also a style for defining function described in GNU C intro and ref, do check it out */ 
{
	int c = 0;
	int state = OUT;

	while ((c = getchar()) != EOF)
	{
		if ((c != ' ') && (c != '\t'))	{
			putchar(c);	/* Print any other character as it is */
			state = OUT;
		}
		else if ((c == ' ') && state == OUT)	{
			putchar(c);	/* Include only the first space and ignore all */
			state = IN;
		}
		else if ((c == '\t') && state == OUT)	{
			putchar(' ');	/* Replace first encounter of tab with a space, ignore rest */
			state = IN;
		}
		else if  ((c == '\t'|| c == ' ') && state == IN)
			;	/* Discard all other blanks and tabs */
	}
	return 0;
}

