#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int a=0,b=1,i;
	printf("0,1");
	while(1)
	{
		a=a+b;
		b=a+b;
		if(a<=300||b<=300)
	{
		printf(",%d,%d",a,b);
	}
	else
		break;
	}

	return 0;
}
		