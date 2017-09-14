#include <stdio.h>
#include <conio.h>
 
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
 
int main(void)
{
	int x,y;
	puts("Please enter 2 integer value:");
	scanf("%d %d",&x,&y);
	printf("x PLUS y=%d\n",x PLUS y);
	printf("x MINUS y=%d\n",x MINUS y);
	printf("x MULT y=%d\n",x MULT y);
	printf("x DIVIDE y=%.2f\n",(float) x DIVIDE y);
	return 0;
}