#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int i,j,b,a=0;
		for (i=1;i<=5;i++)
		{
			a=i;
			printf("%d\t",i);
			for (j=5;j>i;j--)
			{	
				a+=j;
				printf("%d\t",a);
			}
			a=0;
			printf("\n");
		}
	return 0;
}