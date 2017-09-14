//WAP to calculate SI for given P=4000,T=2 and R=5.5(I=PTR/100)

#include <stdio.h>

int main()
{
	int P=4000,T=2;
	float R=5.5,I;
	I=P*T*R/100;
	printf("The simple interest on given data is %.2f",I);
	return 0;
}