/*WAP to print output as given:
x     y    expression    results
6  |  3  |  x=y+3     |   x=6
6  |  3  |  x=Y-2     |   x=1
6  |  3  |  x=y*5     |   x=15
6  |  3  |  x=x/y     |   x=2
6  |  3  |  x=x%y     |   x=0   */

#include <stdio.h>
#include <conio.h>
 
 int x=6,y=3;
 
int main(void)
{
	printf("\n\nx \t  \t y \t  \t expression \t \t result \n");
	printf("%d \t | \t %d \t | \t x=y+3 \t\t | \t x=%d \n",x,y,(y+3));
	printf("%d \t | \t %d \t | \t x=y-2 \t\t | \t x=%d \n",x,y,(y-2));
	printf("%d \t | \t %d \t | \t x=y*5 \t\t | \t x=%d \n",x,y,(y*5));
	printf("%d \t | \t %d \t | \t x=x/y \t\t | \t x=%d \n",x,y,(x/y));
	printf("%d \t | \t %d \t | \t x=x%cy \t\t | \t x=%d \n",x,y,37,(x%y));
	return 0;
}