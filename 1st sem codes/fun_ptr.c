#include <stdio.h>
#include <conio.h>

void add(int a,int b)
{
	printf("The sum is %d",a+b);
}
void subt(int a,int b)
{
	printf("The subtraction is %d",a-b);
}
void mult(int a,int b)
{
	printf("The multiplication is %d",a*b);
}
int main()
{
	int ch,a,b;
	void (*fun_ptr[])(int,int)={add,subt,mult};
	printf("Enter 0 for addition,1 for subtracttion and 2 for multiplication:\n");
	scanf("%d",&ch);
	printf("Enter 2 numbers:\n");
	scanf("%d %d",&a,&b);
	(fun_ptr[ch])(a,b);
	return 0;
}
