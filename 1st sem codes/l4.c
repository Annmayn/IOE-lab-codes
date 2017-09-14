#include <stdio.h>
#include <conio.h>
 
int main(void)
{
	float Phy,Chem,Mth,Eng,Bio,Ttl,Prcn;
	puts("Marks in Physics:");
	scanf("%f",&Phy);
	puts("Marks in Chemistry:");
	scanf("%f",&Chem);
	puts("Marks in Maths:");
	scanf("%f",&Mth);
	puts("Marks in English:");
	scanf("%f",&Eng);
	puts("Marks in Biology:");
	scanf("%f",&Bio);
	Ttl=Phy+Chem+Mth+Eng+Bio;
	Prcn=Ttl/5;
	printf("You got %.2f in Physics.\n",Phy);
	printf("You got %.2f in Chemistry.\n",Chem);
	printf("You got %.2f in Maths.\n",Mth);
	printf("You got %.2f in English.\n",Eng);
	printf("You got %.2f in Biology.\n",Bio);
	printf("You have obtained a total of %.2f marks.\n",Ttl);
	printf("You have obtained %.2f percentage\n",Prcn); 
	if (Prcn<40){
		printf("Sorry,but you failed the exam.");
		getch();
	}
	if (Prcn>=40 && Prcn<55){
		printf("You have obtained third division.");
		getch();
	}
	if (Prcn>=55 && Prcn<65){
		printf("You have obtained second division.");
		getch();
	}
	if (Prcn>=65 && Prcn<80){
		printf("You have obtained first division.");
		getch();
	}
	if (Prcn>=80 && Prcn<95){
		printf("You have passed with distinction.");
		getch();
	}
	if (Prcn>95 && Prcn<100){
		printf("You have passed with extra-ordinary result.");
	}
	else{
		printf("Sorry! It seems like you have entered a wrong data.\n");
	}
	return 0;
}