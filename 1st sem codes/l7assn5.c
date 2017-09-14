#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a[3][3],b[3][3];
	int rslt[3][3],i,j,k;

	printf("For 1st matrix:\n\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		    rslt[i][j]=0;
			printf("Enter the value of element at (%d,%d)\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("For 2nd matrix:\n\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter the value of element at (%d,%d)\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			for (k=0;k<3;k++)
			{
				rslt[i][j]+=a[i][k]*b[k][j];

			}
		}
	}
	printf("The resultant matrix is:\n");
	printf("|\t%d\t%d\t%d\t|\n",rslt[0][0],rslt[0][1],rslt[0][2]);
	printf("|\t%d\t%d\t%d\t|\n",rslt[1][0],rslt[1][1],rslt[1][2]);
	printf("|\t%d\t%d\t%d\t|\n",rslt[2][0],rslt[2][1],rslt[2][2]);
	return 0;
}
