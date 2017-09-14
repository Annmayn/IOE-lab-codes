#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int c,i,n1,n2,sum=0;
	puts("Enter 2 numbers:");
	scanf("%d %d",&n1,&n2);
	if (n1>n2)
	{
		c=n2;
		n2=n1;
		n1=c;
	}
	for (i=n1+1;i<n2;i++)
	{
		if (i%2==0)
			sum+=i;
	}
	printf("The sum is %d",sum);
	return 0;
}