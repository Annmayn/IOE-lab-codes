#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	char a[3],b[3];
	int x,y;
	char Ch1;
	puts("\nPlease enter 2 numerical values:");
	gets(a);
	gets(b);
	x=atoi(a);
	y=atoi(b);
	puts("Press  '+' for plus, '-' for subtract, '/' for divide and  '*' for multiply:");
	Ch1=getche();
	printf("\n");
	(Ch1=='+')? printf("%d",x+y):(Ch1=='-')? printf("%d",x-y):(Ch1=='*')? printf("%d",x*y):(Ch1=='/')? printf("%.2f",(float)x/y):printf("");
	return 0;
}