#include <stdio.h>
#include <conio.h>

int main (void)
{
    int lnt,i;
    char snt[100];
    printf("Enter a sentence:\n");
    gets(snt);
    lnt= strlen(snt);
    for (i=0;i<lnt;i++)
    {
        if (snt[i]!=' ')
        {
            if (snt[i]=='.')
                snt[i]=':';
            printf("%c",snt[i]);
        }

    }
    return 0;
}
