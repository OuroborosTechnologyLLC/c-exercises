#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	// Exercise 1-3: Modify the temperature conversion program to print a heading above the table.
	printf("Temperature Conversion (Fahrenheit)\n F°    | C°\n-------|-------\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%6.0f |%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	// Exercise 1-4: Write a program to print the corresponding Celsius to Fahrenheit table.
	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Temperature Conversion (Celsius)\n F°    | C°\n-------|-------\n");
	while (celsius <= upper) {
		fahr = (celsius * (9.0/5.0)) + 32.0;
		printf("%6.0f |%6.0f\n", fahr, celsius);
		celsius = celsius + step;
	}
	return 0;
}
