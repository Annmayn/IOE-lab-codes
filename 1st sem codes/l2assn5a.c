/* WAP to check odd or even no. :
a) Using Modulus operator
b) Using Bitwise operator
c) Without using Bitwise and Modulus operators
d) Using conditional operator  */

/************************
 *Using Modulus operator*
 ************************/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main()
 {
	 int num,a;
	 printf("Please enter a number");
	 scanf("%d",&num);
	 (num%2==0)? printf("It is even."):printf("It is odd.");
	 return 0;
 }