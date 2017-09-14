#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i,n,mlt,prm,fct=1;
	float sum=5.5;
	for (n=3;n<=10;n++)
	{
		for (i=2;i<n;i++)
		{
			prm=n%i;
			if (prm==0)
			{
				for (mlt=n;mlt>1;mlt--)
				{
					fct=(float)fct*mlt;
				}
					sum+=(float)(n*n)/fct;
					fct=1;
					break;
			}
		}
	}
	printf("The sum is %.2f",sum);
	return 0;
}
