#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int no,a,b,c,d,e,rev;
	printf("Please enter an integer(max=9999):\n");
	scanf("%d",&a);
	no=a;
	if (a>9 && a<=9999)
	{
	if (a>999 && a<=9999)
	{
	b=a/1000;
	a=a-b*1000;
	c=a/100;
	a=a-c*100;
	d=a/10;
	a=a-d*10;
	rev=a*1000+d*100+c*10+b;
	puts("Original:");
	printf("%d\n",no);
	puts("Reversed:");
	printf("%d\n",rev);
	}
	if (a>99 && a<999)
	{
	c=a/100;
	a=a-c*100;
	d=a/10;
	a=a-d*10;
	rev=a*100+d*10+c;
	puts("Original:");
	printf("%d\n",no);
	puts("Reversed:");
	printf("%d\n",rev);
	}
	if (a>9 && a<99)
	{
	b=a/10;
	a=a-b*10;
	rev=a*10+b;
	puts("Original:");
	printf("%d\n",no);
	puts("Reversed:");
	printf("%d\n",rev);
	}
	}
	else{
		printf("Sorrry,wrong input.");
	}
	return 0;
}