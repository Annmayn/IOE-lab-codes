/* WAP to check odd or even no. :
a) Using Modulus operator
b) Using Bitwise operator
c) Without using Bitwise and Modulus operators
d) Using conditional operator  */

/************************
 *Using Bitwise operator*
 ************************/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main()
 {
	 int num;
	 printf("Please enter a number:\n");
	 scanf("%d",&num);
	 ((num&1)==0)? printf("It is even.") : printf("It is odd.");
	 return 0;
 }