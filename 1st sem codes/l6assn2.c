#include <stdio.h>
#include <conio.h>

int add(int);

int main(void)
{
    int sum;
    int x=50;
    sum = add(x);
    printf("The sum of the first 50 natural numbers is %d\n",sum);
	return 0;
}

int add(int a)
{   if(a==1)
        return 1;
    else
        a=a+add(a-1);
    return a;
}
