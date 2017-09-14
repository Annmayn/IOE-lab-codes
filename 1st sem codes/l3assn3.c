/*Given a=8,b=4,c and constant PI=3.1215,
WAP to display following using macros (Pre-processor directives):
a)	c=PI*mult(a,b)	//the macro mult(a,b) performs multiplication of a&b (a*b)
b)	c=PI*sum(a,b)	//the macro sum(a,b) performs sum of a&b (a+b)
c)	c=PI*sub(a,b)	//the macro sub(a,b) performs subtraction of a&b (a-b)
d)	c=PI*div(a,b)	//the macro div(a,b) performs division of a&b (a/b)	*/

#include <stdio.h>
#include <conio.h>
 
#define PI 3.1415
#define mult(a,b) (a*b)
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define div(a,b) ((float)a/b)
 
int a=5,b=4;
 
int main(void)
{
	printf("\nc= PI*mult(a,b)= %.2f\n",PI*mult(a,b));
	printf("c= PI*sum(a,b)=  %.2f\n",PI*sum(a,b));
	printf("c= PI*sub(a,b)=  %.2f\n",PI*sub(a,b));
	printf("c= PI*div(a,b)=  %.2f\n",PI*div(a,b));
	return 0;
}