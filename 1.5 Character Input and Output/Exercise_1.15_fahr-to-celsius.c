/* Function to print the fahrenheit to celsius. Assumption: temperature given in 
fahrenheit is an integer. */

#include <stdio.h>

int fahr_to_celsius (int m);	/* Function to convert fahrenheit to celsius */

int main (void)
{
	int fahr, step, temp, i, j;
	printf("Enter the max temp in fahrenheit: ");
	scanf("%d", &fahr);
	printf("\nEnter the step: ");
	scanf("%d", &step);
	printf("\nStart from: ");
	scanf("%d", &temp);
	printf("\n");
	printf("Fahrenheit\tCelsius\n");

	/* Make the loop convert, print and step to the next temperature to convert */
	while (temp < fahr) {
		printf("%5d\t\t%5d\n", temp, fahr_to_celsius(temp));
		temp = temp + step;
	}
	/* Incase we exceed the max temp while stepping, convert the max temp & print.*/
	if (temp >= fahr) {
		printf("%5d\t\t%5d\n", fahr, fahr_to_celsius(fahr));
	}
	return 0;
}

int fahr_to_celsius (int fahr)
{
	int celsius;
	return celsius = 5 * (fahr - 32) / 9;
}

