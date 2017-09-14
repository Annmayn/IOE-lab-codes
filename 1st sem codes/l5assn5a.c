#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int i,k;
	for(i=1;i<=5;i++)
	{
		for (k=4;k<=i;k--)
			printf("\t");
		printf("*");
		if (i>1)
		{
		for (k=1;k<(i-1)*2;k+=2)
			printf("\t");
		printf("*");
		}
		for (k=4;k<=i;k--)
				printf("\t");
		printf("\n");
	}
	return 0;
}