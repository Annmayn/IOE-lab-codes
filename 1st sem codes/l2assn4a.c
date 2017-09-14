//WAP to swap 2 variables with and without the use of 3rd variable

/****************************
 *With the use of a variable*
 ****************************/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main()
 {
	 int a,b,c;
	 printf("Please enter 2 numbers:\n");
	 scanf("%d %d",&a,&b);
	 printf("Initially, a=%d,b=%d\n",a,b);
     c=a;
	 a=b;
	 b=c;
     printf("After swapping,\n\ta=%d,b=%d",a,b);
	 return 0;
 }