#include <stdio.h>
#include <conio.h>

int add(int,int);
int subtract(int,int);
float divide(int,int);
int multiply(int,int);

int main(void)
{
	int a,b;
	int sum,sub,mult;
	float div;

	printf("Enter 2 integer value:\n");
	scanf("%d %d",&a,&b);
	sum=add(a,b);
    sub=subtract(a,b);
	div=divide(a,b);
	mult=multiply(a,b);

	printf("The result of addition is %d\n",sum);
	printf("The result of subtraction is %d\n",sub);
	printf("The result of division is %.2f\n",div);
	printf("The result of multiplication is %d\n",mult);
	return 0;
}

int add(int a,int b)
{
    int x;
    x=a+b;
    return x;
}

int subtract(int a,int b)
{
    int x;
    x=a-b;
    return x;
}

float divide(int a,int b)
{
    float x;
    x=(float)a/b;
    return x;
}

int multiply(int a,int b)
{
    int x;
    x=a*b;
    return x;
}
