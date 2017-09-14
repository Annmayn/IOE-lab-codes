#include <stdio.h>
#include <conio.h>

void swap(int *a,int *b);

int main(void)
{
	int a,b;
	printf("Enter 2 integer values:\n");
	scanf("%d %d",&a,&b);
	printf("\nBefore swapping:\n");
	printf("a is %d and b is %d\n",a,b);
	swap(&a,&b);
	printf("\nAfter swapping:\n");
	printf("a is %d and b is %d\n",a,b);
	return 0;
}
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

