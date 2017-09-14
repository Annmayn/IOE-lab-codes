#include <conio.h>
#include <stdio.h>
int main()
{
int i,b;
char x[]="UNIVERSITY";
for(i=2;i<11;i=i+2)
{
    for(b=0;b<i;b++)
    printf("%c",x[b]);
    printf("\n");
}
for(i=8;i>=2;i=i-2)
{
    for(b=0;b<i;b++)
    printf("%c",x[b]);
    printf("\n");
}

}
