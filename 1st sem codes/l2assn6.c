/* Print the value of y for given x=2 and z=4 and analyze the output:
a) y=x++ + ++x			b) y=++x + ++x			c) y=++x + ++x + ++x
d) y=x>z				e) y=x>z?x:z			f) y=x&z
g) y=x>>2+z<<1                                                      */

#include <stdio.h>
#include <conio.h>
 
 int x=2,y,z=4;
 
int main()
{
	printf("\na) For y=x++ + ++x:\n");									//a
	y=x++ + ++x;
	printf("%d\n",y);
	printf("*********************************************\n");
	
	x=2,y=0;
	printf("b) For y=++x + ++x:\n");									//b
	y=(++x + ++x);
	printf("%d\n",y);
	printf("*********************************************\n");
	
	x=2,y=0;
	printf("c) For y=++x + ++x + ++x:\n");								//c
	y=(++x + ++x + ++x);
	printf("%d\n",y);
	printf("*********************************************\n");
	
	x=2,y=0;
	printf("d) For y=x>z:\n");											//d
	y=x>z;
	printf("%d\n",y);
	printf("*********************************************\n");
	
	x=2,z=4,y=0;
	printf("e) For y=x>z?x:z:\n");										//e
	y=x>z?x:z;
	printf("%d\n",y);
	printf("*********************************************\n");
	
	x=2,z=4,y=0;
	printf("f) For y=x&z:\n");											//f
	y=x&z;
	printf("%d\n",y);
	printf("*********************************************\n");
	
	x=2,z=4,y=0;
	printf("g) For y=x>>2+z<<1:\n");									//g
	y=x>>2+z<<1;
	printf("%d\n",y);
}