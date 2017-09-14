//Write a formula to calculate SI and CI

#include <stdio.h>
#include <conio.h>

int  main()
{
	float P,T,R,SI,CI;
	printf("Enter the principal,time and rate respectively:\n");
	scanf("%.2f,%.2f,%.2f",&P,&T,&R);
	SI=(float)P*T*R/100;
	CI= 																					//I forgot the formula :P
	printf("The simple interest is %.2f and\nthe compound interest is %.2f",SI,CI);