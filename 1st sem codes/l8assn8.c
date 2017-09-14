#include <stdio.h>
#include <conio.h>

int main(void)
{
    int tst;
    char a[100],b[100],wrd[200];
    printf("Enter 1st string:\n");
    gets(a);
    printf("Enter 2nd string:\n");
    gets(b);
    tst=strcmp(a,b);
    if (tst<0)
        printf("%s comes first.\n",a);
    else if (tst>0)
        printf("%s comes first.\n",b);
    else
        printf("The strings are similar.\n");
    return 0;
}
