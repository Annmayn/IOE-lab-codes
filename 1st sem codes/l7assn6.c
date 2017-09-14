#include <stdio.h>
#include <conio.h>

int main (void)
{
    int len,i,test;
    char wrd[50];
    printf("Enter a string of maximum 50 words:\n");
    scanf("%s",wrd);
    len=strlen(wrd);
    for (i=0;i<len;i++)
    {
        test=(wrd[i]==wrd[len-i-1]);
        if (test==0)
        {
            printf("It is not a palindrome.\n");
            break;
        }
    }
    if (test==1)
        printf("It is a palindrome.\n");
    return 0;
}
