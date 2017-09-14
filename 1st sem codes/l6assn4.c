#include <stdio.h>
#include <conio.h>

int fib(int);
int main(void)
{

    int n,b,x;
    printf("Enter the number of the terms in the series:\n");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        x=fib(b);
        printf("%d  ",x);
    }
    return 0;
}

int fib(a)
{
    if (a==1)
    	return 0;
    else if(a==2)
        return 1;
    else
        return fib(a-2)+fib(a-1);
     }
