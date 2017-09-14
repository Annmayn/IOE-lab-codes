//WAP to calculate area of an ellipse having it's axes(minor=4cm,major=6cm)

#include <stdio.h>

int main()
{
	#define PI 3.1416
	int maj=6,min=4;
	float area;
	area=maj*min*PI/4;
	printf("The area of ellipse with given axes is %.2f cm sq.",area);
	return 0;
}