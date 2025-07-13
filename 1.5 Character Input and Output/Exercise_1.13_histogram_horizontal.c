/* Program to print a histogram of the lengths of words in its input.
Horizontal Version.*/

#include <stdio.h>
#define IN 1
#define OUT 2
#define MAXLEN 30	/* Define the number of maximum words we are considering */

int main (void)
{
	int c, i, j, k, l, state;
	int word_length[MAXLEN] = {0};	/* Array to store the length of words sequentially */

	l = 0;
	state = OUT;

	/* Make the loop get the length of the words. */
	while ((c = getchar()) != EOF)
		{
		/* You can add more filter to filter out other special characters */
		if (c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == '"' || c == ';') {
			state = OUT;
		} else {
			state = IN;
			++l;	/* Increment while inside a word and visiting characters */
			}
		/* When outside of the current word, add its length to the word_length array */
		if (state == OUT && l != 0 && k < MAXLEN) {
			word_length[k] = l;
			++k;
			l = 0;
			}
		}
	/* Make the for loop draw the histogram */
	for(i = 0; i < MAXLEN; ++i)
		if (word_length[i] > 0) {
			for  (j = 0; j < word_length[i]; ++j)
				printf("#");
			printf("\n");
		}
	return 0;
}
