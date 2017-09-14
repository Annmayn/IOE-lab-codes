#include <stdio.h>
#include <conio.h>

int sumpstv(int *x);
int sumngtv(int *x);
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
		if(a[i]>0)
			sumpstv(&a[i]);
		else
			sumngtv(&a[i]);
		
	}
	printf("\n");
	sortarray(&a);
	printf("The sum of positive integers is: %d\n",sum1);
	printf("The sum of negative integers is: %d\n",sum2);
	return 0;
}

int sumpstv(int *x)
{
		sum1+=*x;
	
	
}

int sumngtv(int *x)
{
		sum2+=*x;
}

int sortarray(int *a)
{

	int i,m,tmp;
	for (i=0;i<10;i++)
	{
		for (m=0;m<10;m++)
		{
			if (*(a+i)<*(a+m))
			{
				tmp=*(a+i);
				*(a+i)=*(a+m);
				*(a+m)=tmp;
			}
				
		} 
	}
	printf("The numbers in ascending order are as follows:\n");
	for (i=0;i<10;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
