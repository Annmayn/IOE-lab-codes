/*WAP to prompt the user to enter a 3 digit integer and 
print these values in forward and reverse order*/

#include <stdio.h>
#include <conio.h>
 int main()
 {
	 int num,a,b,c,rev;
	 printf("Please enter a 3 digit integer:\n");
	 scanf("%d",&num);
	 a=num/100;
	 b=num-a*100;
	 b/=10;
	 c=num%10;
	 rev=c*100+b*10+a;
	 printf("The number in forward order is %d\n",num);
	  printf("The number in reverse order is %d",rev);
	  return 0;
 }