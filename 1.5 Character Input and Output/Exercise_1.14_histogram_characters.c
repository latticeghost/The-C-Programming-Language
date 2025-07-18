/* Program to print a histogram of the frequencies of different characters in its input.
Horizontal Version.*/
/* Constraints: Some non printable characters have also been considered, ex. ' ', \t, \n */

#include <stdio.h>
#define MAXLEN 256	/* Define the number of maximum characters in sentence */

void count_char(char s[], int len);	/* Function to count the frequencies of each character */
void draw_histogram(void);	/* Function to draw the horizontal histogram */
int getlinelen(void);	/* Function to store the input and return its length including newline characters */

char chars[MAXLEN] = "";	/* Array to store unique characters */
int chars_count[MAXLEN] = {0};	/* Array to store the frequencies of characters */
char line[MAXLEN] = {0};	/* Array to store the input line */

int getlinelen (void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLEN - 2 && ((c = getchar()) != EOF) && c != '\n' ; ++i) {
		line[i] = c;
	}
 	if (c == '\n') {
		line[i] = '\n';
		++i;
	} else if (i >= MAXLEN - 2 && c != EOF) {
		while((c = getchar()) != EOF && c != '\n') {
			;	/* Discard characters if greater than 254 characters */
		}
		line[i] = '\n';
		++i;
	}

	line[i] = '\0';
	return i;
}
void count_char(char s[], int len)
{
	extern char chars[];
	extern int chars_count[];
	int k, l;
	k = l = 0;

	for (int i = 0; i < len; ++i) {
		/* Iterate for every character we encounter to check whether it has been encountered earlier */
		for (int j = 0; chars[j] != '\0'; ++j) {
			if (s[i] == chars[j]) {
				k = j;
			}
		}
		/* If seeing the character for first time, add to the unique list of characters */
		if (k == 0 && l < MAXLEN && len > 0) {
			chars[l] = s[i];
			++chars_count[l];
			++l;
			chars[l] = '\0';
		/* Else if character has been already seen once, increment its count */
		} else if (k > 0) {
			++chars_count[k];
			k = 0;
		}
	}
}
void draw_histogram(void) {

	extern char chars[];
	extern int chars_count[];

	int j = 0;
	/* Make the loop get the length of the chars array */
	while (chars[j] != '\0') {
		++j;
	}

	/* Make the for loop draw the histogram */
	for(int i = 0; i < j; ++i){
		if (chars[i] == ' ') {
			printf("\" \"\t");
		} else if (chars[i] == '\n') {
			printf("\\n\t");
		} else if (chars[i] == '\t') {
			printf("\\t\t");
		} else {
			printf("%c\t", chars[i]);
		}
		for(int k = 0; k < chars_count[i]; ++k) {
			printf("#");
		}
		printf("\n"); 
	}
}
int main (void)
{
	int len;
	extern char line[], chars[];

	len = getlinelen();	/* Make the getlinelen() populate the line array and return its length */
	count_char(line, len);	/* Make the count_char() make a list of unique characters and their frequencies */
	draw_histogram();	/* Make the draw_histogram() draw the horizontal histogram */

	return 0;
}
