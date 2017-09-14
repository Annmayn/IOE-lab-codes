#include <stdio.h>
#include <conio.h>

int display(int[]);
int main(void)
{
	int i;
	int a[5];
	printf("Enter number values:\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	display(*a[]);
	return 0;
	
}

int display(int *a[])
{
	int i;
	for (i=0;i<5;i++)
	{
		printf("%d",a[i]);
		
	}
}
