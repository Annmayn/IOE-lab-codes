#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int i,j;
		for (i=1;i<=5;i++)
		{
			for (j=1;j<=i;j++)
			{	printf("%d\t",j*j);
			}
			printf("\n");
		}
	return 0;
}