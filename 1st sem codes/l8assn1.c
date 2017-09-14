#include <stdio.h>
#include <conio.h>

void bgst(int *p,int *q,int *r);
void swap(int *a,int *b);
int main(void)
{
	int a,b,c;
	printf("Enter 3 numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	bgst(&a,&b,&c);
	printf("The biggest number is %d\n",a);
	return 0;
}

void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

void bgst(int *p,int *q,int *r)
{
	int tmp;
	if ((*p>*q && *r>*p)||(*q>*p && *r>*q))
	{
			swap(r,p);
	}
	if ((*p>*r && *q>*p)||(*r>*p && *q>*r))
	{
			swap(q,p);
	}
}
