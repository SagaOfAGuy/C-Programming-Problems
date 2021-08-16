#include <stdio.h>
/* print Fahrenheigt-Celsius table */ 

int main() { 
	//define fahrenheit variable
	int fahr;
	// Basic header for data
	printf("Fahrenheit\t\tCelsius\n");	
	// create fahrenheit to celsius table
	for(fahr=300; fahr>=0; fahr-=20)  
		printf("%3d\t\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
