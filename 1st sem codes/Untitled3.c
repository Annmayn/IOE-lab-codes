#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i,j,tmp,n,*arr;
	printf("Enter no. of integer values:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
		
	}
	printf("\n");
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (*(arr+i)>*(arr+j))
			{
				tmp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=tmp;
			}
		}
	}
	printf("\nAfter sorting:\n");
	for (i=0;i<n;i++)
		printf("%d\n",*(arr+i));
	return 0;
}

