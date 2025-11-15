// Program to calculate distance travelled by an object 
#include <stdio.h> 
int main() 
{ 
float speed, time, distance; 
// Input values 
printf("Enter the speed of the object (in m/s or km/h):") ;
scanf("%f", &speed); 
printf("Enter the time taken (in seconds or hours): "); 
scanf("%f", &time); 
// Calculate distance 
distance = speed * time; 
// Output result 
printf("Distance travelled by the object = %.2f units\n",distance);
return 0;
}
