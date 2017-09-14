#include <stdio.h>
#include <conio.h>

int fact(int);

int main(void)
{   int a,b;
	float comb,perm;
	printf("Enter 2 numbers:\n");
	scanf("%d %d",&a,&b);
	comb = fact(a)/(fact(b)*fact(a-b));
	perm = fact(a)/fact(b);
	printf("The combination of %d and %d is %.2f\n",a,b,comb);
    printf("The permutation of %d and %d is %.2f\n",a,b,perm);

    return 0;
}

int fact(int s)
{
	int a,tmp=1;
	for (a=1;a<=s;a++)
		tmp=a*tmp;
	return tmp;
}

