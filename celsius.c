//conversion of fahrenheit to celsius and  vice versa.
#include <stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("enter temp in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit -32)/18;
	printf("temperature in celsius:%.2f",celsius);
	return 0;
}
