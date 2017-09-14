#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	int a;
	puts("Please enter an integer:");
	scanf("%d",&a);
	if (a%5==0)
	{
		printf("It is a multiple of 5.\n");
	}
	else{
		printf("It is not a multiple of 5\n");
	}
	if (a%7==0 && a%11!=0)
		{
		printf("It is divisible by 7 but not by 11.\n");
	}
	else{
		printf("It is not divisible by 7 or it is divisible by 11 or both\n");
	}
	printf("\nTHE END!!!\n");
	return 0;
}