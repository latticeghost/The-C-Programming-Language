/* Program  to print a histogram of the lengths of words in its output. Vertical
version */

#include <stdio.h>
#define IN 1
#define OUT 2
#define MAXLEN 30 	/* Define the maximum number of words in our sentence */

int main (void)
{
	int c, i, j, k, l, max, state;
	int word_length[MAXLEN] = {0};

	k = l = 0;
	state = OUT;
	/* Make the loop count the length of the words and store them in word_length array */
	 while((c = getchar()) != EOF)
        {
		if (c == ' ' || c == '\t' || c == '\n' || c == '.' || c == '?' || c == '!' || c == '(' || c == ')' || c == '"' || c == ';' || c == ':') {
			state = OUT;
		} else {
			state = IN;
			++l;	/* Increment while inside a word and visiting its characters */
		}
		if (state == OUT && l > 0 && k < MAXLEN) {
			word_length[k] = l;
			++k;
			l = 0;
		}
	}
	/* Make the loop find the maximum word length */
	max = 0;
	for (i = 0; i < k; ++i) {	/* k currently has the number of words in our sentence */
		if (word_length[i] >= max){
			max = word_length[i];
		}
	}
	/* Make the loop print the vertical histogram */
	for (i = 0; i < max; ++i) {	/* Vertically we only loop maximum word length number of times is. */
		for(j = 0; j < k; ++j) { /* Horizontally we only loop k number of times */
			if (word_length[j] >= (max - i)) {
				printf(" #");
			} else {
				printf ("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

