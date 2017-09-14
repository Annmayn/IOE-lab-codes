#include <stdio.h>
#include <conio.h>

void insrt(char *p,char *q);
int main (void)
{
    char *p;
    char str1[100],str2[100];
    printf("Enter a string:\n");
    gets(str1);
    printf("\nBY USING STRING HANDLING FUNCTIION:\n");
    strcpy(str2,str1);
    printf("\nThe string has been copied to str1\n");
    printf("\nIn str2:\n");
    printf("%s\n",str2);

    printf("\nWITHOUT USING STRING HANDLING FUNCTIION:\n");
    insrt(&str2,&str1);
    printf("\nThe string has been copied to str1\n");
    printf("\nIn str2:\n");
    printf("%s\n",str2);
    return 0;
}

void insrt(char *p,char *q)
{
    p=q;
}
