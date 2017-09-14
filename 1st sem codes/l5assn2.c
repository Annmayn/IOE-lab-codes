#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int c,i,n1,n2,hcf,lcm;
	puts("Enter 2 numbers:");
	scanf("%d %d",&n1,&n2);
	if (n1>n2)
	{
		c=n2;
		n2=n1;
		n1=c;
	}
	for (i=1;i<=n1;i++)
	{
		if (n1%i==0 && n2%i==0)
			hcf=i;
	}
	for (i=n1*n2;i>=n2;i--)
	{
		if (i%n1==0 && i%n2==0)
			lcm=i;
	}	
	printf("The HCF of given numbers is %d\n",hcf);
	printf("The LCM of given numbers is %d\n",lcm);
	return 0;
}