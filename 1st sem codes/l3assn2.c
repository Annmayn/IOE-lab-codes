/*Given x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;WAP to display:
x   y   z=    3.0|	  12.5|   523.3|
A	B	C=	300.3|	1200.5|	 5300.3|
----------------------------------
x	y	z=	|3.0	|12.5	|523.3
A	B	C=	|300.3	|1200.5	|5300.3   */

#include <stdio.h>
#include <conio.h>
 
 float x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;
 
int main(void)
{
	
	printf("x\ty\tz=\t%8.1f|%8.1f|%8.1f|\n",x,y,z);
	printf("A\tB\tC=\t%8.1f|%8.1f|%8.1f|\n",A,B,C);
	printf("---------------------------------------------------\n");
	printf("x\ty\tz=\t|%-8.1f|%-8.1f|%-8.1f\n",x,y,z);
    printf("A\tB\tC=\t|%-8.1f|%-8.1f|%-8.1f\n",A,B,C);
	return 0;
}