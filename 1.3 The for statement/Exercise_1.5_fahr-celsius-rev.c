/* Program to print the fahrenheit to celsius in reverse order
i.e., from 300 to 0. Constraints: step by 20 */ 

# include <stdio.h>

int main (void)
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr -32));
	return 0;
}
