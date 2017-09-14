#include <stdio.h>
#include <conio.h>

int main (void)
{
char snt[100];
int chln=0,wrln=1;
int i,n;
printf ("Enter a sentence:\n");
gets(snt);
n=strlen (snt);
for (i=0;i<n;i++)
{
    if (snt[i]==' ')
    {
        wrln++;
        continue;
    }
    if (snt[i]=='\0')
    {
        break;
    }
    chln++;
}
printf("The character length is %d\n",chln);
printf ("The number of words is %d\n",wrln);
return 0;
}
