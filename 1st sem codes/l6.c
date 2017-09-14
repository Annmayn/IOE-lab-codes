#include <stdio.h>
#include <conio.h>

int fact(int);

int main(void)
{
	int i,j;
	float sum=2;

	for (i=3;i<=10;i++)
	{
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
				sum+=(float)i*i/fact(i);
				break;
			}
		}
	}
	printf("The sum is %.2f",sum);
	return 0;
}
int fact(s)
{
	int tmp=1;
	if (s<=1)
		return 1;
	else
		return s*fact(s-1);
}
