#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	char c;
	printf("Please enter an alphabet:\n");
	scanf("%c",&c);
	c=toupper(c);
	if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("It is a vowel");
	}
	else{
		printf("It is not a vowel");
	}
	return 0;
}