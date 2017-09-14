#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	float x,y;
	char name[15],adrs[10],twt[4],tht[4],tyr[3];
	int yr;
	float wt,ht;
	puts("Name(max 15 char): ");
	gets(name);
	puts("Address: ");
	gets(adrs);
	puts("Age: ");
	gets(tyr);
	yr=atoi(tyr);
	puts("Weight: ");
	gets(twt);
	wt=atof(twt);
	puts("Height: ");
	gets(tht);
	ht=atof(tht);
	fputs("Your name is ",stdout);
	puts(name);
	fputs("Your address is ",stdout);
	puts(adrs);
	fputs("Your age is ",stdout);
	puts(tyr);
	fputs("Your weight is ",stdout);
	puts(twt);
	fputs("Your height is ",stdout);
	puts(tht);
	return 0;
}