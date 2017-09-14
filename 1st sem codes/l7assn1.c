#include <stdio.h>
#include <conio.h>

int main(void)
{
 float a[10];
 int i;
 printf("Enter 10 integer values:\n");
 for (i=0;i<10;i++)
 {
 scanf("%f",&a[i]);
 }
 printf("The numbers you entered are:\n");
 for (i=0;i<10;i++)
 {
 printf("%.2f\n",a[i]);
 }
 return 0;
}
