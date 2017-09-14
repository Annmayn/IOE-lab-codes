#include <stdio.h>
#include <conio.h>

int main(void)
{
float sml,lrg;
 float a[10];
 int i;
 printf("Enter 10 integer values:\n");
 for (i=0;i<10;i++)
 {
 scanf("%f",&a[i]);
 }
sml=a [0];
lrg=a [0];
 printf("The numbers you entered are:\n");
 for (i=0;i<10;i++)
 {
 printf("%.2f\n",a[i]);
 }
for (i=0;i <10;i++)
{
if (sml>a [i])
sml=a [i];
if (lrg<a [i])
lrg=a [i];
}
printf ("The smallest number you have entered is %.2f\n",sml);
printf ("The largest number you have entered is %.2f\n",lrg);
 return 0;
}
