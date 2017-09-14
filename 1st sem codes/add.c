#include <stdio.h>
#include <conio.h>

int add(int,int);

main(void)
{
    int sum,a,b;
    sum=add(5,4);
    printf("The sum is %d",sum);
}
int add (int a,int b)
{
    int tmp;
    tmp=a+b;
    return tmp;
}
