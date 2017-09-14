// WAP to print the size of char,float,doubk\le and long double data types in C

#include <stdio.h>

int main(void)
{
	
	int a,b,c,d;
	a=sizeof(char);
	b=sizeof(float);
	c=sizeof(double);
	d=sizeof(long double);
	printf("%d,%d,%d,%d",a,b,c,d);
	return 0;
}