#include <stdio.h>

void sort(int *);
void sort1(int **);
int main(void)
{
	int i;
	int a[]={2,3,5};
	sort(a);
	for (i=0;i<3;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void sort(int *b)
{
	void sort1(b);
}

void sort1(int **c)
{
	int tmp;
	tmp=**(c+0);
	**(c+0)=**(c+1);
}
