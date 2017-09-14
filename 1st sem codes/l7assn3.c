#include <stdio.h>
#include <conio.h>

int main(void)
{
int sum=0;
 int a[10];
 int sml,i;
float avr=1;
 printf("Enter 10 integer values:\n");
 for (i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
sml=a[0];
 printf("The numbers you entered are:\n");
 for (i=0;i<10;i++)
 {
 printf("%d\n",a[i]);
 }
for (i=0;i <10;i++)
{
sum+=a[i];
}
avr=(float) sum/10;
printf ("The sum of the numbers you entered is %d\n",sum);
printf ("The average of the numbers you entered is %2f\n",avr);
 return 0;
}
