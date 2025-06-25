/* Program to convert celsius to fahrenheit, from 0 to 300
by step of 20 */

#include <stdio.h>

int main(void) {
	float celsius, fahr;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	printf("Celsius\t\tFahrenheit\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = 32 + ((9.0/5.0) * celsius);
		printf("%  5.0f\t\t%7.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}

