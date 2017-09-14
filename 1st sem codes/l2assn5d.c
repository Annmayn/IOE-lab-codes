/* WAP to check odd or even no. :
a) Using Modulus operator
b) Using Bitwise operator
c) Without using Bitwise and Modulus operators
d) Using conditional operator  */

/****************************
 *Using Conditional operator*
 ****************************/
 
 #include <stdio.h>
 #include <conio.h>
 
 int main()
 {
	 int num;
	 printf("Please enter a number:\n");
	 scanf("%d",&num);
	 (num&1)? printf("It is odd.") : printf("It is even.");   // (num&1)?1:0;
	 return 0;
 }