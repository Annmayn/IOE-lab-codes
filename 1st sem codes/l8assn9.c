#include <conio.h>
#include <stdio.h>
#include <string.h>

void sortarray(char**);

int main()
{int i;
char *a[5]={"ashish","manish","neema","bishal","babu"};
sortarray(a);
for(i=0;i<5;i++)
printf("%s \n",a[i]);
return 0;
}

void sortarray(char **a)
{
   int i,j;
   char *temp;
 for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
}

