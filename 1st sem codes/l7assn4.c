#include <stdio.h>
#include <conio.h>

int main(void)
{
int a [3][2],b [3][2],c[3][2];
int i,j,k;
printf ("For 1st matrix:\n\n");
for (i=0;i <3;i++)
{
    for (j=0;j <2;j++)
    {
        printf ("Enter the element at (%d,%d):\n",(i+1),(j+1));
        scanf ("%d",&a[i][j]);
    }
}
printf ("\n\nFor 2nd matrix:\n\n");
for (i=0;i<3;i++)
{
    for (j=0;j<2;j++)
    {
        printf ("Enter the element at (%d,%d):\n",(i+1),(j+1));
        scanf ("%d",&b[i][j]);
    }
}
for (i=0;i<3;i++)
{
    for (j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("The resultant matrix is :\n");
printf("|\t%d\t%d\t|\n",c[0][0],c[0][1]);
printf("|\t%d\t%d\t|\n",c[1][0],c[1][1]);
printf("|\t%d\t%d\t|\n",c[2][0],c[2][1]);
return 0;
}
