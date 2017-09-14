//fafaf
#include <stdio.h>
#include <conio.h>

#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /

int main(void)
{
	int x=2,y=8;
	char op[8],PLUS,MINUS,MULT,DIVIDE;
	scanf("%s",&op);
	(op=="PLUS")?printf("%d",x PLUS y):printf("Sorry");
	return 0;
}