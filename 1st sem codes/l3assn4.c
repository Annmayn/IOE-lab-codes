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
	char a;

	printf("Press any key to continue while in the program!!!\n\n");
	getch();
	printf("In getch():\n");
	printf("1) You don't have to press enter to validate input.\n");
	printf("2) Your input isn't displayed on the screen\n");
	printf("DEMO:\nPlease enter a character value:\n");
	a=getch();
	printf("\nEnd of DEMO!\n\n");
	getch();

	printf("In getche():\n");
	printf("1) You don't have to press enter to validate input.\n");
	printf("2) Your input is displayed on the screen\n");
	printf("DEMO:\nPlease enter a character value:\n");
	a=getche();
	printf("\nEnd of DEMO!\n\n");
	getch();

	printf("In getchar():\n");
	printf("1) You have to press enter to validate input.\n");
	printf("2) Your input is displayed on the screen\n");
	printf("DEMO:\nPlease enter a character value:\n");
	a=getchar();
	printf("\nEnd of DEMO!\n\n");
	getch();
	return 0;
}
