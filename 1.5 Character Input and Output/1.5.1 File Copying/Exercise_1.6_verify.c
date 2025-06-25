/* Program to verify that the expression getchar() != EOF is 0 or 1 */
/* Note the expression will only be equal to 0 if getchar() == EOF */

#include <stdio.h>

int main(void)
{
	int c;
	printf("Enter a character:\n");
	if ((c = getchar()) != EOF)
	{
		printf("The value of the expression getchar() != EOF is 1\n");
	} else {
		printf("The value of the expression getchar() != EOF is 0\n");
	}
	return 0;
}

