#include <stdio.h>
#include <conio.h>

void sub(int,int);
int a=10;

int main(void)
{
    printf("a is a global variable with value 10.\n\
b is a static variable with value 9.\n");
    static int b=9;
    printf("\nIn sub-function:\n");
    sub(a,b);
      printf("\nAfter sub-function:\n");
    printf("\nIn main function:\n");
    printf("\nThe value of b is %d.\n",b);
    return 0;
}

void sub(a,b)
{
    a=a+5;
    b=8;
    printf("\nAfter initializing value of b to 8,the value of b is %d.\n",b);
    printf("After adding 5,a is %d.\n",a);
}
