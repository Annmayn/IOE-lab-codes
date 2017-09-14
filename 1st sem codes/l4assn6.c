#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int main(void)
{
	int a,b,c;
	float r1,r2;
	puts("For the equation ax^2+x+c=0,put values of a,b and c respectively:");
	scanf("%d %d %d",&a,&b,&c);
	r1=(float) (-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(float) (-b-sqrt(b*b-4*a*c))/(2*a);
	printf("The roots are: %.2f and %.2f",r1,r2);
	return 0;
}