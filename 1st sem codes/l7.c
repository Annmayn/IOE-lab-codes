#include <stdio.h>
#include <conio.h>
#include <math.h>

int calc(int);
int sortarray(int a[]);

int sum1=0,sum2=0;

int main(void)
{
	int a[10];
	int i;
	printf("Enter 10 integer values:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		calc(a[i]);
		
	}
	printf("\n");
	sortarray(a);
	printf("The sum of positive integers is: %d\n",sum1);
	printf("The sum of negative integers is: %d\n",sum2);
	return 0;
}

int calc(x)
{
	
	if (x>0)
	{
		sum1+=x;
		return sum1;
	}
	else
	{
		sum2+=x;
		return sum2;
	}
}

int sortarray(int a[])
{
	int b[10];
	int i,m,tmp;
	for (i=0;i<10;i++)
	{
		for (m=0;m<10;m++)
		{
			if (a[i]<a[m])
			{
				tmp=a[m];
				a[m]=a[i];
				a[i]=tmp;
			}
				
		} 
	}
	printf("The numbers in ascending order are as follows:\n");
	for (i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}
