//WAP to swap 2 variables with and without the use of 3rd variable

/*******************************
 *Without the use of a variable*
 *******************************/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main()
 {
	 int a,b;
	 printf("Please enter 2 numbers:\n");
	 scanf("%d %d",&a,&b);
	 printf("Initially, a=%d,b=%d\n",a,b);
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 printf("After swapping,\n\ta=%d,b=%d",a,b);
	 return 0;
 }