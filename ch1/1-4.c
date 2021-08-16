#include <stdio.h>
int main() {
	// Celsius variable
	int celsius; 
	// print header
	printf("Celsius\t\tFahrenheit\n");
	// print values
	for (celsius = 0; celsius <= 300; celsius+=20)
		printf("%3d\t\t%6.1f\n",celsius, (9.0/5.0 * celsius)+(32));
}
