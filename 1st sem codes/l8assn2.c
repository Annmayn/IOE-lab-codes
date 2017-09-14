#include <stdio.h>
#include <conio.h>

int sum=0;
int add(int *a);
int main(void)
{
	
	int a[8]={3,6,4,7,8,2,1,9};
	add(a);
	printf("The sum is %d",sum);
	return 0;
}
int add(int *a)
{
	int i;
	for (i=0;i<8;i++)
	{
		sum+=*(a+i);
	}
}
