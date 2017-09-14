#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int a,b,c,grt;
	puts("Please enter 3 integers:");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b){
		if (a>c){
			printf("%d is the greatest.\n",a);
			grt=a;
		}else{
			printf("%d is the greatest.\n",c);
			grt= c;
		}
	}
	if (b>a){
		if (b>c){
			printf("%d is the greatest.\n",b);
			grt= b;
		}else{
			printf("%d is the greatest.\n",c);
			grt=c;
		}
	}
if (grt%2==0)
{
	printf("It is even.\n");
}
else{
	printf("It is odd");
}
		return 0;
}