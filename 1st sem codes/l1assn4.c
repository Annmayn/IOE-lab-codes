//WAP to calculate area of a circle having radius(r=5)

#include <stdio.h>
#include <math.h>

int main(void)
{
	#define PI 3.1416
	int r=5;
	float area;
	area=PI*pow(r,2);
	
	/********************************************************
	*You can also write:                                    *
	*area=PI*r*r                                            *
	*if you don't want to include math.h header file        *
	********************************************************/
	
	printf("The area of circle of radius %d is %.2f",r,area);
	return 0;
}