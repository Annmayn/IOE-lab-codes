/* WAP to check odd or even no. :
a) Using Modulus operator
b) Using Bitwise operator
c) Without using Bitwise and Modulus operators
d) Using conditional operator  */

/*********************************************
 *Without using Bitwise and Modulus operators*
 *********************************************/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main()                                                                  //Don't know how to
 {
	 int num;
	 printf("Please enter a number:\n");
	 scanf("%d",&num);
	 (num&1)? printf("It is even.") : printf("It is odd.");
	 return 0;
 }