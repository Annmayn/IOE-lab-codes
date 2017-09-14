#include <stdio.h>
#include <conio.h>

int main(void)
{
    char a[100],b[100],wrd[200];
    printf("Enter 1st string:\n");
    gets(a);
    printf("Enter 2nd string:\n");
    gets(b);
    printf("%s",strcat(a,b));

    return 0;
}
