/* Program to print fahrenheit and its corresponding celsius value
from 0 to 300, stepping by 20*/

#include <stdio.h>

int main(void) {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	printf("Fahrenheit\tCelsius\n");
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("  %3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
} 
