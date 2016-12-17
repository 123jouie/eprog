#include <stdio.h>
#include <math.h>

int main(){

	float F,C;
	float a=32;
  
	printf("HI!\n");
	printf("Conversion of Degree Fahrenheit to Degree Celsius!\n");

	printf("Enter Farenheit Value:");
	scanf ("%f", &F);

	C = F-a;

	printf ("Degree Celsius: %.3f:", C*0.56);
}
